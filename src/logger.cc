#include "logger.h"
#include <time.h>
#include <iostream>

Logger::Logger() 
{
     m_LogLevel = INFO;
     // 启动工作线程专门用来写日志
     std::thread writeLogTask([&](){
          while (1)
          {
               // 获取当前的日期，然后取日志信息，写入相应的日志文件当中 
               time_t now = time(nullptr);
               tm* nowtm = localtime(&now);

               char file_name[128];
               sprintf(file_name, "%d-%d-%d-log.txt", nowtm->tm_year+1900, nowtm->tm_mon+1, nowtm->tm_mday);

               FILE *pf = fopen(file_name, "a+");
               if (pf == nullptr)
               {
                    std::cout << "logger file :" <<file_name << "open error!" << std::endl;
                    exit(EXIT_FAILURE);
               }
               
               // 取出消息
               std::string msg = m_safQue.Pop();

               char time_buf[128] = {0};
               sprintf(time_buf, "%d:%d:%d => [%s]", 
                                   nowtm->tm_hour, 
                                   nowtm->tm_min, 
                                   nowtm->tm_sec,
                                   (m_LogLevel == INFO ? "INFO" : "ERROR"));
               msg.insert(0, time_buf);

               fputs(msg.c_str(), pf);
               fclose(pf);
          }
     });

     //设置分离线程，守护线程
     writeLogTask.detach();
}


// 获取日志的单例
Logger& Logger::GetInstance()
{
     static Logger logger;
     return logger;
}

// 设置日志级别
void Logger::SetLogLevel(LogLevel level) 
{
     m_LogLevel = level;
}


// 写日志, 把日志信息写到缓冲区中
void Logger::Log(std::string msg)
{
     m_safQue.Push(msg);
}