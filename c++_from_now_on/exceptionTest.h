#pragma once
#ifndef _EXCEPTIONTEST_H
#define _EXCEPTIONTEST_H

#include<iostream>
#include<exception>
#include<csignal>
#include<windows.h>
using namespace std;

//自定义异常
class myException :public exception
{
public:
	const char* what() const throw ()
	{
		return "myException caught!";
	}
};
void myExceptionTest();
//动态内存
void trendsMeory();
//信号处理
void signalHandle(int signum);
void test();


#endif