// Project8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"
/*
作者：Juston
时间：20191116
简介：输出所有的水仙花数
水仙花数是指一个3位数，其各位数字立方和等于该数本身
*/

int main()
{
	int start = 100, end = 999, temp;
	for (int i = start; i <= end; i++)
	{
		temp = 0;
		for (int j = 1; j <= 3; j++)
		{
			temp += (int)pow((i / (int)pow(10, 3 - j)) % 10, 3);
		}
		if (i == temp)
			printf("%d\n", i);
	}
    return 0;
}

