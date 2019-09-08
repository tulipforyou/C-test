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
	cout << "方式1输出(for循环输出)：" << endl;
	for (int i = 0; i < primeCount; i++)
	{
		cout << setw(5) << A[i];
		if ((i + 1) % 6 == 0)	cout << endl;
	}
	cout << endl;
	cout << "方式2输出(迭代器输出)：" << endl;
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

void Map::mapOperation()
{
	map<string, string>mapStu;
	cout << "3种方式实现数据插入：" << endl;
	cout << "first:" << endl;
	mapStu.insert(pair<string, string>("000", "孙朝辉"));
	mapStu.insert(pair<string, string>("111", "肖建"));
	mapStu.insert(pair<string, string>("222", "王浩颖"));
	mapStu.insert(pair<string, string>("333", "胡静宇"));
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "second:" << endl;
	mapStu.insert(map<string, string>::value_type("444", "孙朝辉"));
	mapStu.insert(map<string, string>::value_type("555", "肖建"));
	mapStu.insert(map<string, string>::value_type("666", "王浩颖"));
	mapStu.insert(map<string, string>::value_type("777", "胡静宇"));
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "third:" << endl;
	mapStu["888"]= "孙朝辉";
	mapStu["999"]= "肖建";
	mapStu["101010"]= "王浩颖";
	mapStu["111111"]= "胡静宇";
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "现在进行映射的其他操作......" << endl;
	cout << "修改操作：" << endl;
	mapStu["777"] = "大傻逼";
	cout << "修改777为：" << endl;
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "删除操作：" << endl;
	mapStu.erase("666");
	cout << "删除666后为：" << endl;
	for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
		cout << stringMap->first << " " << stringMap->second << '\t';
	cout << endl;
	cout << "查找操作：" << endl;
	string numStu;
	cout << "输入需要查找的学号：" << endl;
	cin >> numStu;
	map<string, string>::iterator name;
	name = mapStu.find(numStu);
	cout << "查找结果为：" << endl;
	if (name != mapStu.end())
	{
		cout << "查找成功： ";
		cout << name->second << endl;
	}
	else
		cout << "查找失败！" << endl;
	cout << endl;
	cout << "带判断的插入操作：" << endl;
	pair<map<string, string>::iterator, bool> insert_pair;
	insert_pair = mapStu.insert(map<string, string>::value_type("478", "合工大"));
	if (!insert_pair.second) cout << "插入失败！" << endl;
	else
	{
		cout << "插入结果为：" << endl;
		for (map<string, string>::iterator stringMap = mapStu.begin(); stringMap != mapStu.end(); stringMap++)
			cout << stringMap->first << " " << stringMap->second << '\t';
	}
	cout << endl;
}

