// Project10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：猴子吃桃问题 猴子第一天有n个桃子，当即吃了一半多一个，第二天早上又吃了一半多一个，第10天早上只剩下一个。求一共多少个桃子。
*/

int main()
{
	//(n / 2) - 1 反推出公式 (n + 1) * 2
	int n = 1,count = 9;
	for (int i = 0; i < count; i++)
	{
		n = (n + 1) * 2;
	}
	printf("count = %d", n);
    return 0;
}

