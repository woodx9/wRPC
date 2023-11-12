#include "zookeeperutil.h"
#include "wrpcapplication.h"
#include <semaphore.h>
#include <iostream>
#include "logger.h"

// 全局的watcher观察器   zkserver给zkclient的通知
void global_watcher(zhandle_t *zh, int type,
                   int state, const char *path, void *watcherCtx)
{

	// std::cout << "global watcher start" << std::endl;
	if (type == ZOO_SESSION_EVENT)  // 回调的消息类型是和会话相关的消息类型
	{
		if (state == ZOO_CONNECTED_STATE)  // zkclient和zkserver连接成功
		{
			sem_t *sem = (sem_t*)zoo_get_context(zh);
			sem_post(sem);
		}
	}
}

ZkClient::ZkClient() : m_zhandle(nullptr)
{
}

ZkClient::~ZkClient()
{
	if (m_zhandle != nullptr)
	{
		zookeeper_close(m_zhandle); // 关闭句柄，释放资源
	}
}

// 连接zkserver
void ZkClient::Start()
{
	std::cout << "zk start!!!" << std::endl;

	std::string host = wRPCApplication::GetInstance().GetConfig().Load("zookeeperip");
	std::string port = wRPCApplication::GetInstance().GetConfig().Load("zookeeperport");
	std::string connstr = host + ":" + port;
	
		/*
		zookeeper_mt：多线程版本
		zookeeper的API客户端程序提供了三个线程
		API调用线程 
		网络I/O线程  pthread_create  poll
		watcher回调线程 pthread_create
		*/
	m_zhandle = zookeeper_init(connstr.c_str(), global_watcher, 30000, nullptr, nullptr, 0);
	std::cout << "ip:port " << connstr.c_str() << std::endl;
	if (nullptr == m_zhandle) 
	{
		std::cout << "zookeeper_init error!" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::cout << "zk init end" << std::endl;

	// sem_t sem;
	// sem_init(&sem, 0, 0);
	// zoo_set_context(m_zhandle, &sem);


	// sem_wait(&sem);
	sleep(10);
	std::cout << "zookeeper_init success!" << std::endl;
}

void ZkClient::Create(const char *path, const char *data, int datalen, int state)
{
	char path_buffer[128];
	int bufferlen = sizeof(path_buffer);
	int flag;
		// 先判断path表示的znode节点是否存在，如果存在，就不再重复创建了
		ZOOAPI int zoo_awexists(zhandle_t *zh, const char *path,
							watcher_fn watcher, void* watcherCtx,
							stat_completion_t completion, const void *data);
		flag = zoo_aexists(m_zhandle, path, 0, nullptr, nullptr);
		if (ZNONODE == flag) // 表示path的znode节点不存在
		{
			// 创建指定path的znode节点了
			ZOOAPI int zoo_acreate(zhandle_t *zh, const char *path, const char *value, 
								int valuelen, const struct ACL_vector *acl, int mode,
								string_completion_t completion, const void *data);
			flag = zoo_acreate(m_zhandle, path, data, datalen,
				&ZOO_OPEN_ACL_UNSAFE, state, nullptr, path_buffer);
			if (flag == ZOK)
			{
				std::cout << "znode create success... path:" << path << std::endl;
			}
			else
			{
				std::cout << "flag:" << flag << std::endl;
				std::cout << "znode create error... path:" << path << std::endl;
				exit(EXIT_FAILURE);
			}
		}
		else 
		{
			std::cout << "the path already exits!!! flag: " << flag << std::endl;
		}


     
}

// 根据指定的path，获取znode节点的值
std::string ZkClient::GetData(const char *path)
{
	char buffer[64];
	int bufferlen = sizeof(buffer);
	
	int flag = zoo_aget(m_zhandle, path, 0, nullptr, buffer);
	if (flag != ZOK)
	{
		std::cout << "get znode error... path:" << path << std::endl;
		return "";
	}
	else
	{
		return buffer;
	}
}