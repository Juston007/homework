// Project4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：输入两个数，求最大公约数
*/

int main()
{
	int a, b, temp;
	printf("输入两个数，求最大公约数\n");
	scanf_s("%d%d", &a, &b);

	//如果b大于a，那么交换a和b的值
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	while ((a % b) != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	printf("最大公约数 = %d", b);
	return 0;
}

