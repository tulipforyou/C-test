/*
创建时间：2019.9.4
创建人：孙朝辉
创建目的：用于C++学习的测试用例
版本：1.0
运行环境：VS2019
*/
#include<iostream>
#include<math.h>
#include<string>
#include"first_cpp.h"
#include"random.h"
#include"timeSch.h"
#include"jicheng.h"
#include"rongQi.h"
#include"templateTest.h"
#include"exceptionTest.h"
#include"algorithmTest.h"
#include"fileTest.h"
#include<sstream>
#include "MySQLManager.h"
using namespace std;

char beep = 7;  //响铃

void annual();
void achievement();
void sort1(int array[],int n);
int fbnq(int n);
void copystr(char* str1, char* str2);

/*
求数组长度的模板
*/
template<class T>
int getLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}
//函数模板的特化

int main()
{
	start();
	//annual();
	//achievement();

	//冒泡排序的测试程序
	/*int a[] = { 0,1,2,1,1,5,56,4645,2,2654,-591};
	sort1(a, getLen(a));
	for (int i = 0; i < getLen(a); i++)
	{
		cout << a[i] << " ";
	}
	cout<<endl;*/

	/*int array[5] = { 0,1,2,3,4 };
	int* p = array;  // 等价于int *p=&array[0];
	cout << *p << endl;*/

	//copystr指针实现字符串复制测试部分
	/*char *a = "sdfgfefghk,mndssdfgggbn vfdbgnbdbdjg" ;
	char b[100];
	copystr(a, b);
	cout << b << endl;*/

	//函数指针测试部分
	/*int(*p)(int);  //指向一个有一个整形参数函数的整形指针
	p = fbnq;      //指向函数fbnq
	cout << (*p)(20) << endl;*/

	/*Vector vt;
	vt.print_2_to_n();
	List ls;
	ls.listOperation();
	Map m;
	m.mapOperation();*/

	//模板测试程序
	/*Pair<int> pi1(24, 560);
	cout << pi1.getMax() << endl;
	Pair<float> pi2(2.4, 5.60);
	cout << pi2.getMax() << endl;
	Pair<char> pi3('g', 'h');
	cout << pi3.getMax() << endl;*/
	
	/*cout << Max(56, 89) << endl;
	const char* a = "dsgff";
	const char* b = "dsghngf";
	cout << Max(a, b) << endl;*/

	/*algorithmTest at;
	vector<int> v1(10);
	at.operation(v1);*/

	/*fileTest ft;
	ft.openFileAndOperation("sch.txt");*/

	//myExceptionTest();
	//trendsMeory();
	//test();

	/*vector<int> v;
	vector<int> ::iterator iter;
	v.reserve(20);
	for (int i = 0; i < 20; i++)
	{
		v.push_back(i);
	}
	cout << v.size() << endl;

	cout << "1:" << endl;
	for (iter=v.begin(); iter!=v.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	v[5] = v[9] = v[15] = 99;
	cout << "2:" << endl;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	v.erase(remove(v.begin(), v.end(), 99), v.end());
	cout << "3:" << endl;
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;
	cout << v.size() << endl;*/
	


	end();  
	return 0;
}


void annual()
{
	double rate;
	int year;
	double money;
	double monthPay;
	double totalPay;
	cout << "请输入利率：" << endl;
	cin >> rate;
	cout << "请输入年数：" << endl;
	cin >> year;
	cout << "请输入总额：" << endl;
	cin >> money;
	monthPay = (money * rate) / (1 - 1 / pow(1+rate,year*12));
	totalPay = monthPay * 12 * year;
	cout << "月供和总供为：" << monthPay << "   " << totalPay << endl;
}

void achievement()
{
	int count = 1;
	double achieve,sumAchieve=0;
	while (count != 6)
	{
		cout << "请输入第 "<<count<<" 门课程的成绩:  ";
		cin >> achieve;
		sumAchieve = sumAchieve + achieve;
		count++;
	}
	cout << "五门成绩平均分为：" << sumAchieve / 5 << endl;
}
/*
冒泡排序
*/
void sort1(int array[],int n)
{
	int num = n;
	for (int j = 0; j < n-1; j++)			//  n个数据排N-1遍
	{
		for (int i = 0; i < num-1; i++)		//  num-1 防止数组越界，因为下面有个i+1    还有一种写法是把num-1写为 n-j（不需要num变量）
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		num--;
	}
}
/*
斐波那契数列递归实现求值
*/
int fbnq(int n)
{
	int result;
	if (n > 2)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
		result = fbnq(n - 1) + fbnq(n - 2);
	}
	else
		result = 1;
	return result;
}
/*
字符串复制函数，指针实现
第一个参数为源字符串，第一个为复制源
*/
void copystr(char* str1, char* str2)
{
	while (*str1 != '\0')
		* str2++ = *str1++;
	*str2 = '\0';
}
