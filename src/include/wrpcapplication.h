#pragma once

// wrpc框架的初始化基础类
#include "wrpcconfig.h"

class wRPCApplication 
{


public:
     static void Init(int argc, char **argv);
     static wRPCApplication& GetInstance();
     static WRpcConfig& GetConfig();
private: 
     wRPCApplication() {}
     wRPCApplication(const wRPCApplication&) = delete;
     wRPCApplication(wRPCApplication&&) = delete;

     static WRpcConfig m_config;
};