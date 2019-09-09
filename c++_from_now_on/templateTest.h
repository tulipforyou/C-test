#pragma once

#ifndef _TEMPLATETEST_H
#define _TEMPLATETEST_H

#include<iostream>
#include<cstring>
using namespace std;
//定义
template <class T>
class Pair
{
public:
	Pair();
	Pair(T a, T b);
	T getMax();
private:
	T first,second;
};
//实现
template <class T>
Pair<T>::Pair()
{
	first = a;
	second = b;
}
template <class T>
Pair<T>::Pair(T a, T b)
{
	first = a;
	second = b;
}
template <class T>
T Pair<T>::getMax()
{
	return first > second ? first : second;
}
//函数模板
template <typename T> T Max(T num1, T num2)
{
	return (num1 > num2 ? num1 : num2);
}
//函数模板的特化
//见主函数
template<>inline const char* Max<const char*>(const char* a, const char* b)
{
	return (strcmp(a, b) < 0 ? b : a);
}
#endif

