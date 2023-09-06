#include "wrpcchannel.h"


/*
发送的字符串数据流格式
header_size + service_name method_name args_size + args
*/

// 所有通过stub代理对象调用的rpc方法，都走到了这里，统一做rpc方法调用的数据序列化和网络发送
void WRpcChannel::CallMethod(const google::protobuf::MethodDescriptor* method,
                          google::protobuf::RpcController* controller, 
                          const google::protobuf::Message* request,
                          google::protobuf::Message* response, 
                          google::protobuf::Closure* done)
{
     const google::protobuf::ServiceDescriptor * sd = method->service();
     std::string service_name = sd->name();
     std::string method_name = method->name();

     // 获取参数的序列化字符串长度 args_size
     int args_size = 0;
     std::string args_str;
     if (request->SerializeToString(&args_str)) 
     {
          args_size = args_str.size();
     }
     else 
     {
          std::cout << "args serialize request error!" <<  std::endl;
          return;
     }

     // 定义rpc的请求header
     uint32_t header_size = 0;
     wrpc::RpcHeader rpcHeader;
     rpcHeader.set_service_name(service_name);
     rpcHeader.set_method_name(method_name);
     rpcHeader.set_args_size(args_size);

     std::string rpc_header_str;
     if (rpcHeader.SerializeToString(&rpc_header_str)) 
     {
          header_size = rpc_header_str.size();
     }
     else 
     {
          std::cout << "args serialize rpc header error!" <<  std::endl;
          return;
     }

     // 组织待发送的rpc请求的字符串
     std::string send_rpc_str;

     send_rpc_str.insert(0, std::string((char *)&header_size, 4));
     send_rpc_str += rpc_header_str;
     send_rpc_str += args_str;


     // 使用tcp编程，完成rpc方法的远程调用
     int clientfd = socket(AF_INET, SOCK_STREAM, 0);
     if (-1 == clientfd)
     {
          std::cout << "create socket error! error:" << errno << std::endl;
          exit(EXIT_FAILURE);
     }

     std::string ip = wRPCApplication::GetInstance().GetConfig().Load("rpcserverip");
     uint32_t port = atoi(wRPCApplication::GetInstance().GetConfig().Load("rpcserverport").c_str());

     struct sockaddr_in server_adder;
     server_adder.sin_family = AF_INET;
     server_adder.sin_port = htons(port);
     server_adder.sin_addr.s_addr = inet_addr(ip.c_str());

     // 连接rpc服务器节点
     if (connect(clientfd, (struct sockaddr*)&server_adder, sizeof(server_adder)))
     {
          std::cout << "connect error! errno: " << errno << std::endl;
          exit(EXIT_FAILURE);
     }
     
     // 发送rpc请求
     if (send(clientfd, send_rpc_str.c_str(), send_rpc_str.size(), 0) == -1)
     {
          std::cout << "send error! errno: " << errno << std::endl;
          close(clientfd);
          return;
     }

     // 接收rpc请求的响应值
     char recv_buf[1024] = {};
     int recv_size = 0;
     if ((recv_size = recv(clientfd, &recv_buf, 1024, 0)) == -1)
     {
          std::cout << "recv error! errno: " << errno << std::endl;
          close(clientfd);
          return;
     }

     std::string response_str(recv_buf, 0, recv_size);
     if (response->ParseFromString(response_str) == -1)
     {
          std::cout << "parse error! response_str: " << recv_buf << std::endl;
          close(clientfd);
          return;
     }

     close(clientfd);
}