#include"exceptionTest.h"

void myExceptionTest()
{
	try
	{
		throw myException();
	}
	catch (myException& e)
	{
		cout << e.what() << endl;
	}
}

void trendsMeory()
{
	double* p1 = NULL;
	p1 = new double;
	*p1 = 556165.516;
	cout << "p1: " << *p1 << endl;
	delete p1;
	int* p2 = NULL;
	p2 = new int[5];
	for (int i = 0; i < 5; i++)
		p2[i] = i;
	cout << "p2: " << endl;
	for (int i = 0; i < 5; i++)
		cout << p2[i] << " ";
	cout << endl;
	delete [] p2;
	int** p3 = NULL;
	p3 = new int * [10];
	for (int i = 0; i < 10; i++)
		p3[i] = new int[10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			p3[i][j] = i * j;
	}
	cout << "p3:" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout<<p3[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
	delete [] p3;
}
