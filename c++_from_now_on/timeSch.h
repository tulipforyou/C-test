#pragma once
#ifndef _TIMESCH_H
#define _TIMESCH_H

#include <iostream>
using namespace std;

class timeSch
{
public:
	timeSch();
	timeSch(int,int,int);
	~timeSch();
	int getH();
	int getD();
	int getS();
private:
	int h,d,s;  // ±∑÷√Î
};

#endif