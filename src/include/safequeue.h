#pragma once
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

// 异步写日志的日志队列
template<typename T>
class SafeQueue
{
public:
     void Push(const T &data);

     T Pop();
     int size();
private:
     std::queue<T> m_queue;
     std::mutex m_mutex;
     std::condition_variable m_cv;

};

template<typename T>
void  SafeQueue<T>::Push(const T &data)
{
     std::lock_guard<std::mutex> lg(m_mutex);
     m_queue.push(data);
     m_cv.notify_one();
}

template<typename T>
T SafeQueue<T>::Pop()
{
     std::unique_lock<std::mutex> ul(m_mutex);
     m_cv.wait(ul, [this](){return  !m_queue.empty();});
     T t = m_queue.front();
     m_queue.pop();
     return t;
}

template<typename T>  
int SafeQueue<T>::size()
{
     std::lock_guard<std::mutex> lg(m_mutex);
     return m_queue.size();
}