#include"rongQi.h"

void Vector::print_2_to_n()
{
	vector<int> A(10);
	int primeCount = 0, i;
	cout << "请输入一个>=2的整数作为上限值：" << endl;
	cin >> i;
	if (i < 2)
	{
		cout << "输入数字太小，请重新输入：" << endl;
		cin >> i;
	}
	A[primeCount++] = 2;
	for (int j = 3; j < i; j++) 
	{
		if (primeCount == A.size())	A.resize(primeCount + 10);
		if (j % 2 == 0)	continue;
		int k = 3;
		while (k <= j / 2 && j % k != 0)	k += 2;
		if (k > j / 2	)A[primeCount++] = j;
	}
	//两种输出方式，注意不同之处
	cout << "方式1输出：" << endl;
	for (int i = 0; i < primeCount; i++)
	{
		cout << setw(5) << A[i];
		if ((i + 1) % 6 == 0)	cout << endl;
	}
	cout << endl;
	cout << "方式2输出：" << endl;
	for (vector<int>::iterator intVector = A.begin(); intVector != A.end(); intVector++)
		cout << *intVector << '\t';
	cout << endl;
}

void List::listOperation()
{
	list<int> B;
	int listSize,num,n;
	cout << "请输入创建列表大小：" << endl;
	cin >> listSize;
	cout << "请输入" << listSize << "个整数：" << endl;
	for (int i = 0; i < listSize; i++)
	{
		cin >> num;
		B.push_front(num);
	}
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
	cout << "请输入需要删除的元素：" << endl;
	cin >> n;
	B.remove(n);
	cout << "删除后的列表为：" << endl;
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
	cout << "现在进行列表排序......" << endl;
	B.sort();
	cout << "排序结果为：" << endl;
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
	cout << "现在进行列表颠倒......" << endl;
	B.reverse();
	cout << "颠倒结果为：" << endl;
	for (list<int>::iterator intList = B.begin(); intList != B.end(); intList++)
		cout << setw(5) << *intList << '\t';
	cout << endl;
}
