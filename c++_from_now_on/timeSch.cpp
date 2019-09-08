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
