// Project3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：将100-200之间的所有素数输出
*/

int main()
{
	//素数 质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。
	int start = 100, end = 200;
	int flag = 1;
	for (int i = start; i < end; i++)
	{
		//flag = 1;
		for (int j = 2; j < i; j++)
		{
			if ((flag = (i % j)) == 0)
				break;
		}
		if (flag)
			printf("%d\n", i);
	}
	return 0;
}

