#include "MySQLManager.h"
#include <iostream>
#include <stdio.h>
using namespace std;

// 连接数据库
bool MySQLManager::Init(ConnectionInfo& info)
{
    // 初始化mysql,连接mysql，数据库
    mysql_init(&m_mysql);

	//设置数据库字符集为GBK防止中文乱码
	if (0 == mysql_options(&m_mysql, MYSQL_SET_CHARSET_NAME, "gbk"))//设置字符集
	{
		cout << endl;
	}

    // 连接失败
    if (!(mysql_real_connect(&m_mysql, info.host, info.user, info.password, info.database, info.port, info.unix_socket, info.clientflag)))
    {
		cout << "接入数据库失败\n\n" << endl;
		return false;
    }
	else
	{
		cout << "接入数据库成功\n\n" << endl;
		return true;
	}
    return true;
}

// 释放连接
bool MySQLManager::FreeConnect()
{
    //释放资源
    mysql_free_result(m_res);
    mysql_close(&m_mysql);

    return false;
}

// 执行sql语句, 包括增加、删除、更新数据
bool MySQLManager::ExecuteSql(const char * sql)
{
    if (mysql_query(&m_mysql, sql))
    {
        // 打错误log，这里直接显示到控制台
        cerr << "执行sql语句失败，错误信息为： " << mysql_error(&m_mysql) << endl;
        return false;
    }
    else
    {
        cout << "执行sql语句成功！" << endl;
    }

    return true;
}

// 查询数据
MYSQL_RES* MySQLManager::QueryData(const char* sql)
{
    if (mysql_query(&m_mysql, sql))
    {
        // 打错误log，这里直接显示到控制台
        cerr << "查询语句执行失败，错误信息为： " << mysql_error(&m_mysql) << endl;
        return nullptr;
    }
    else
    {
        cout << "查询语句执行成功！" << endl;
    }

    // 存储查询结果
    m_res = mysql_store_result(&m_mysql);

    return m_res;
}

// 遍历结果集
void MySQLManager::PrintQueryRes()
{
    if (nullptr == m_res || NULL == m_res)
    {
        return;
    }

    // 获取行数
    // unsigned int rows = mysql_affected_rows(m_mysql);

    // 字段列数组
    MYSQL_FIELD* field = nullptr;
    //存字段名二维数组
    char fieldName[64][32];  

    // 获取字段名
    for (int i = 0; field = mysql_fetch_field(m_res); ++i)
    {
        strcpy_s(fieldName[i], field->name);
    }

    // 获取列数
    int columns = mysql_num_fields(m_res);
    for (int i = 0; i < columns; ++i)
    {
        // 使用C语言的printf格式化更方便一点
        printf("%10s\t", fieldName[i]);
    }
    cout << endl;

    MYSQL_ROW row;
    while (row = mysql_fetch_row(m_res))
    {
        for (int i = 0; i < columns; ++i)
        {
            printf("%10s\t", row[i]);
        }
            
        cout << endl;
    }

}