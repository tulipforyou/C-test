#pragma once

// 网络通信头文件
#include <WinSock.h>

// 引入mysql头文件(比较好的做法是把文件夹拷到工程目录，也可以在vc目录里面设置)
#include "include/mysql.h"

#include <Windows.h>

// 包含附加依赖项，也可以在工程--属性里面设置
#pragma comment(lib, "wsock32.lib")
#pragma comment(lib, "libmysql.lib")

// 连接数据库的一些必要信息
struct ConnectionInfo
{
	const char* host;            // 主机地址
	const char* user;            // 用户名
	const char* password;        // 密码
	const char* database;        // 数据库名
	unsigned int port;            // 端口号
	const char* unix_socket;    // unix连接标识
	unsigned long clientflag;    // 客户端连接标志

	// 构造函数，设置一些默认值
	ConnectionInfo() :
		host("127.0.0.1"),
		port(3306),
		unix_socket(NULL),
		clientflag(0)
	{

	}
};

class MySQLManager
{
public:

	// 连接数据库
	bool Init(ConnectionInfo& info);

	// 释放连接
	bool FreeConnect();

	// 增加数据
	// bool InsertData(const char* sql);

	// 删除数据
	// bool DeleteData(const char* sql);

	// 更新数据
	// bool UpdateData(const char* sql);

	// 执行sql语句, 包括增加、删除、更新数据
	bool ExecuteSql(const char* sql);

	// 查询数据
	MYSQL_RES* QueryData(const char* sql);

	// 打印结果集
	void PrintQueryRes();

private:
	MYSQL m_mysql;                // mysql连接
	MYSQL_RES* m_res;            // 查询结果集

};