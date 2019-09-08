#include "random.h"

const int MAX = 100;

/*
随机数发生器，最大值为MAX，范围是[0,MAX-1]
*/
int random()
{
	srand((unsigned)time(NULL)); //产生以当前时间为开始的随机种子
	return rand() % MAX;
}