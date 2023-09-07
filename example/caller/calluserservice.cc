#include <iostream>
#include "wrpcapplication.h"
#include "user.pb.h"



int main(int argc, char **argv) 
{
     // 整个程序启动以后，想使用wrpc框架来享受rpc服务调用，一定需要先用wrpc框架来享受rpc服务调用，
     // 需要先调用框架的初始化函数（只初始化一次）
     wRPCApplication::Init(argc, argv);

     // 演示调用远程发布的rpc方法Lgin
     userdata::UserServiceRpc_Stub stub(new WRpcChannel());
     // RpcChannel->RpcChannel::callMethod 集中来做所有rpc方法的参数序列化和网络发送
     userdata::LoginRequst request;
     request.set_name("woodx up");
     request.set_pwd("12345");
     // rpc方法的响应
     userdata::LoginResponse response;
     // 发起rpc方法的调用  同步的rpc调用过程  MprpcChannel::callmethod


     WRpcController controller;
     stub.Login(&controller, &request, &response, nullptr); // RpcChannel->RpcChannel::callMethod 集中来做所有rpc方法调用的参数序列化和网络发送

     // 通过controller来查看rpc调用过程中是否发生错误
     if (controller.Failed()) 
     {
          std::cout << controller.ErrorText() << std::endl;
          return 0;
     } 

     // 一次rpc调用完成，读调用的结果

     if (0 == response.result().errcode())
     {
          std::cout << "rpc login response success:" << response.sucess() << std::endl;
          std::cout << "error_code: " << response.result().errcode() << std::endl;
          std::cout << "error_msg: " << response.result().errmsg() << std::endl;
     }
     else
     {
          std::cout << "rpc login response error : " << response.result().errmsg() << std::endl;
     }       

     /* 
     24 10

     */
                    

     return 0;
}