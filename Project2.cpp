// Project2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"

/*
作者：Juston
时间：20191116
简介：编写一个C程序，运行时输入a、b、c三个值，输出其中值最大者
*/

int main()
{
	int a, b, c,max;

	printf("输入三个数字，输出最大值。\n");

	scanf_s("%d%d%d", &a, &b, &c);

	max = a;
	max = a > b ? a : b;
	max = b > c ? b : c;

	printf("max = %d\n",max);

    return 0;
}

