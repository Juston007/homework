// Project11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：输出下面的图案

   *
  ***
 *****
*******
 *****
  ***
   *

   an + 2
*/

int main()
{
	int i, j, k;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2 - i; j++)
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 4 - 2 * i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}

