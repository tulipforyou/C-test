#pragma once
#ifndef _JICHENG_H
#define _JICHENG_H
#include<iostream>
#include<iomanip>
using namespace std;

class firstClass
{
public:
	firstClass();
	firstClass(double x, double y) :width(x), length(y) {}
	void setWidth(double x);
	void setLength(double y);
	double getWidth();
	double getLength();
protected:
	double width,length;
};
class secondClass :public firstClass
{
public:
	secondClass();
	secondClass(double x,double y,double z):firstClass(x,y),hight(z){}
	void setHight(double z);
	double getHight();
	void area();
private:
	double hight;
};

#endif