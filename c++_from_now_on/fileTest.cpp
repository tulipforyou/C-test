#include"fileTest.h"

void fileTest::openFileAndOperation(char *s)
{
	ifstream inFile;
	ofstream outFile;

	outFile.open(s, ios::out);
	cout << "输入写入文件的内容:" << endl;
	char str[256];
	cin.getline(str,256);
	outFile << str;
	outFile.close();

	inFile.open(s,ios::in);
	char str2[256];
	while (inFile >> str2)
	{
		cout<<str2<<" ";
	}
	cout << endl;
	inFile.close();
}
