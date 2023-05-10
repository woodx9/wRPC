#include <sys/time.h>
#include "Wrocket/common/log.h"

namespace Wrocket {
void LogEvent::printLog() {
     struct timeval now_time;
     gettimeofday(&now_time, nullptr);

     struct tm now_time_t;
     localtime_r(&(now_time.tv_sec), &now_time_t);
     
     char buf[128];
     strftime(&buf[0], 128, "%y-%m-%d %H:%M:%S", &now_time_t);
     std::string time_str(buf);

     int ms = now_time.tv_usec * 1000;
     time_str = time_str + "." + std::to_string(ms);

}

}