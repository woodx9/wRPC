#pragma once

#include <google/protobuf/service.h>
#include <string>
#include <google/protobuf/descriptor.h>
#include "user.pb.h"
#include <iostream>
#include "rpcheader.pb.h"
// socket相关
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
// socket相关

#include <error.h>
#include "wrpcapplication.h"


class WRpcChannel: public google::protobuf::RpcChannel
{
private:
     
public:
     // 所有通过stub代理对象调用的rpc方法，都走到这里了，统一做rpc方法调用的数据序列化和网络发送
     void CallMethod(const google::protobuf::MethodDescriptor* method,
                          google::protobuf::RpcController* controller, 
                          const google::protobuf::Message* request,
                          google::protobuf::Message* response, 
                          google::protobuf::Closure* done) override;
     
};
