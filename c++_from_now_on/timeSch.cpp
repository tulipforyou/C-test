#include "timeSch.h"

timeSch::timeSch()
{
	h = d = s = 0;
}

timeSch::timeSch(int h1, int d1, int s1)
{
	h = h1;
	d = d1;
	s = s1;
}

int timeSch::getH()
{
	return h;
}

int timeSch::getD()
{
	return d;
}

int timeSch::getS()
{
	return s;
}

timeSch::~timeSch()
{
}

void timeSch::remindMe()
{
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	if (sys.wHour > 22 || sys.wHour < 5)
		cout << "\n--------------------------------星星都睡了，你还在工作吗？--------------------------------\n" << endl;
	cout << "当前时间为：";
	printf("%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
}
