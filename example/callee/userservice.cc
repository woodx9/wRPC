#include <iostream>
#include <string>
#include "user.pb.h"
#include "wrpcapplication.h"
#include "rpcprovider.h"


/*
UserService原来是一个本地服务，提供了两个进程内的打印方法，Login和GetFriendList
*/


class UserService : public userdata::UserServiceRpc //使用在rpc服务发布端（rpc服务提供者）
{
public:
     bool Login(std::string name, std::string pwd) {
          std::cout << "doing local service: Login" << std::endl;
          std::cout << "name: " << name << " pwd:" << pwd << std::endl;
          return true;
     }

     // 重写UserServiceRpc的虚函数，下面这些方法都是给框架直接调用的
     void Login(::google::protobuf::RpcController* controller,
                       const ::userdata::LoginRequst* request,
                       ::userdata::LoginResponse* response,
                       ::google::protobuf::Closure* done) override
     {
          // 框架给业务上报了请求参数LoginRequest，应用业务获取相应数据做本地业务
          std::string name = request->name();
          std::string pwd = request->pwd();

          // 本地实际函数调用
          bool login_result = Login(name, pwd);

          // 把响应写入，包括错误码，错误消息，返回值
          userdata::ResultCode * code = response->mutable_result();
          code->set_errcode(0);
          code->set_errmsg("no error");

          response->set_sucess(login_result);

          // 执行回调函数 执行响应对象数据的序列化和网络发送 （都是由框架来完成的）
          done->Run();
     }



};


int main(int argc, char **argv) 
{
     // 调用框架的初始化操作 provider -i config.conf
     wRPCApplication::Init(argc, argv);


     // 把UserService对象发布到rpc节点上
     RpcProvider provider;
     provider.NotifyService(new UserService());

     // 启动一个rpc服务发布节点 Run以后，进程进入阻塞状态，等待远程的rpc调用请求
     provider.Run(); 


     UserService us;
     us.Login("woodx", "123456");

     return 0;
}