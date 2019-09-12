#pragma once
#ifndef _ALGORITHMTEST_H
#define _ALGORITHMTEST_H
#include"iostream"
#include"algorithm"
using namespace std;

class algorithmTest
{
public:
	template <typename T>
	void show(T &vc);
	template <typename T>
	void operation(T& vc);
};

#endif

template<typename T>
void algorithmTest::show(T &vc)//输出内容
{
	if (vc.empty() == 1)	cout << "没有元素！" << endl;
	else
	{
		T::iterator i1 = vc.begin();
		for (; i1 != vc.end(); i1++)	cout << *i1 << " ";
		cout << endl;
	}
}

template<typename T>
void algorithmTest::operation(T& vc)
{
	cout << "算法使用：" << endl;
	fill(vc.begin(), vc.end(), 's');
	cout << "填充结果：" << endl;
	show(vc);

	cout << "移除容器部分值：" << endl;
	remove(vc.begin(), vc.end() - 5, 's');
	cout << "移除结果：" << endl;
	show(vc);

	cout << "替换容器部分值：" << endl;
	replace(vc.begin(), vc.end() - 5, 's','k');
	cout << "替换结果：" << endl;
	show(vc);
}

