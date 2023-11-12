#pragma once
#include "safequeue.h"
#include <string>

enum LogLevel
{
     INFO,     // 普通信息
     ERROR,    // 错误信息
};

// wrpc提供的日志系统
class Logger
{
public:   
     // 获取日志的单例
     static Logger& GetInstance();

     // 设置日志级别
     void SetLogLevel(LogLevel level);
     // 写日志
     void Log(std::string msg); 

private:
     int m_LogLevel; // 记录日志级别
     SafeQueue<std::string> m_safQue; // 日志缓冲队列

     Logger();
     Logger(const Logger &) = delete;
     Logger(Logger &&) = delete;
};


// 定义宏
#define LOG_INFO(logmsgformat, ...)     \
     do \
     {  \
          Logger &logger = Logger::GetInstance(); \
          logger.SetLogLevel(INFO); \
          char c[1024] = {0}; \
          snprintf(c, 1024, logmsgformat, ##__VA_ARGS__); \
          std::string str(c); \
          str += '\n'; \
          logger.Log(str); \
     } while(0);



#define LOG_ERR(logmsgformat, ...)      \
     do \
     {  \
          Logger &logger = Logger::GetInstance(); \
          logger.SetLogLevel(ERROR); \
          char c[1024] = {0}; \
          snprintf(c, 1024, logmsgformat, ##__VA_ARGS__); \
          std::string str(c); \
          str += '\n'; \
          logger.Log(str); \
     } while(0);


     