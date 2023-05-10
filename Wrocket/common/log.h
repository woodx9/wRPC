/*
日志模块：

1. 日志级别
2. 打印到文件，支持日期命名，以及日志的滚动。
3. c 格式化风控
4. 线程安全

LogLevel:
Debug
Info
Error

LogEvent:
文件名、行号
MsgNo
进程号
Thread id
日期，以及时间。精确到 ms
自定义消息
日志格式

[Level][%y-%m-%d %H:%M:%s.%ms]\t[pid:thread_id]\t[file_name:line][%msg]
Logger 日志器 1.提供打印日志的方法 2.设置日志输出的路径

*/
#include <string>


#ifndef WROCKET_COMMON_LOG_H

#define WROCKET_COMMON_LOG_H

namespace Wrocket {


template<typename... Args> 
std::string formatString(const char * str, Args&&... args) {
     int size = snprintf(nullptr, 0, str, args...);
     
     std::string result;
     if (size > 0) {
          result.resize(size);
          snprintf(&result[0], size + 1, str, args...);
     }

     return result;
}

enum LogLevel {
     Debug = 1,
     Info = 2,
     Error = 3
};

class LogEvent {
public:

     std::string getFileName() const {
          return m_file_name;
     }

     LogLevel getLogLevel() const {
          return m_level;
     }

     void printLog();

private:
     std::string m_file_name; // 文件名
     std::string m_file_line; // 行号
     int m_pid; // 进程号
     int m_thread_id; // 线程号

     LogLevel m_level; //日志级别

};


}


#endif