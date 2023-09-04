#include "wrpcapplication.h"
#include <iostream> 
#include <unistd.h>


//静态初始化 m_config;
WRpcConfig wRPCApplication::m_config;

void ShowArgsHelp()
{
     std::cout << "format: comand -i <configfile>" << std::endl;
}


void wRPCApplication::Init(int argc, char **argv)
{
     if (argc < 2) {
          ShowArgsHelp();
          exit(EXIT_FAILURE);
     }


     int c = 0;
     std::string config_file;
     while ((c = getopt(argc, argv, "i:")) != -1) {
          switch (c)
          {
          case 'i':
               config_file = optarg;
               break;
          case '?' :
               std::cout << "invalid args!" << std::endl;
               ShowArgsHelp();
               exit(EXIT_FAILURE);
          case ':':
               std::cout << "need <configfile>" << std::endl;
               ShowArgsHelp();
               exit(EXIT_FAILURE);
          default:
               break;
          }
     }


     // 开始加载配置文件 rpcserver_ip= rpcserver_port= zookeeper_ip= zookeeper_port=
     m_config.LoadConfigFile(config_file.c_str());

     return;
}


wRPCApplication& wRPCApplication::GetInstance()
{
     static wRPCApplication app;
     return app;
}

WRpcConfig& wRPCApplication::GetConfig()
{
     return m_config;
}