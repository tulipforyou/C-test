/*
����ʱ�䣺2019.9.4
�����ˣ��ﳯ��
����Ŀ�ģ�����C++ѧϰ�Ĳ�������
�汾��1.0
���л�����VS2019
*/
#include<iostream>
#include<math.h>
#include<string>
#include"first_cpp.h"
#include"random.h"
#include"timeSch.h"
#include"jicheng.h"
using namespace std;

char beep = 7;  //����

void annual();
void achievement();
void sort1(int array[],int n);
int fbnq(int n);
void copystr(char* str1, char* str2);

/*
�����鳤�ȵ�ģ��
*/
template<class T>
int getLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

int main()
{
	start();

	//annual();
	//achievement();

	//ð������Ĳ��Գ���
	/*int a[] = { 0,1,2,1,1,5,56,4645,2,2654,-591};
	sort1(a, getLen(a));
	for (int i = 0; i < getLen(a); i++)
	{
		cout << a[i] << " ";
	}
	cout<<endl;*/

	/*int array[5] = { 0,1,2,3,4 };
	int* p = array;  // �ȼ���int *p=&array[0];
	cout << *p << endl;*/

	//copystrָ��ʵ���ַ������Ʋ��Բ���
	/*char *a = "sdfgfefghk,mndssdfgggbn vfdbgnbdbdjg" ;
	char b[100];
	copystr(a, b);
	cout << b << endl;*/

	//����ָ����Բ���
	/*int(*p)(int);  //ָ��һ����һ�����β�������������ָ��
	p = fbnq;      //ָ����fbnq
	cout << (*p)(20) << endl;*/

	haha

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
	cout << "���������ʣ�" << endl;
	cin >> rate;
	cout << "������������" << endl;
	cin >> year;
	cout << "�������ܶ" << endl;
	cin >> money;
	monthPay = (money * rate) / (1 - 1 / pow(1+rate,year*12));
	totalPay = monthPay * 12 * year;
	cout << "�¹����ܹ�Ϊ��" << monthPay << "   " << totalPay << endl;
}

void achievement()
{
	int count = 1;
	double achieve,sumAchieve=0;
	while (count != 6)
	{
		cout << "������� "<<count<<" �ſγ̵ĳɼ�:  ";
		cin >> achieve;
		sumAchieve = sumAchieve + achieve;
		count++;
	}
	cout << "���ųɼ�ƽ����Ϊ��" << sumAchieve / 5 << endl;
}
/*
ð������
*/
void sort1(int array[],int n)
{
	int num = n;
	for (int j = 0; j < n-1; j++)			//  n��������N-1��
	{
		for (int i = 0; i < num-1; i++)		//  num-1 ��ֹ����Խ�磬��Ϊ�����и�i+1    ����һ��д���ǰ�num-1дΪ n-j������Ҫnum������
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
쳲��������еݹ�ʵ����ֵ
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
�ַ������ƺ�����ָ��ʵ��
��һ������ΪԴ�ַ�������һ��Ϊ����Դ
*/
void copystr(char* str1, char* str2)
{
	while (*str1 != '\0')
		* str2++ = *str1++;
	*str2 = '\0';
}