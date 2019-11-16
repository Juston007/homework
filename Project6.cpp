// Project6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math.h"
/*
作者：Juston
时间：20191116
简介：给出一个不多于5的正整数，输出它是几位数，分别输出每一位数字，倒序输出
*/

int main()
{
	int num,length;
	printf("输入一个不多于5的正整数，输出它是几位数，分别输出每一位数字，倒序输出\n");
	scanf_s("%d",&num);

	//计算他是几位数
	printf("**********************几位数**********************\n");
	for (length = 0; length <= 5; length++)
	{
		if ((num / (int)pow(10, length)) == 0)
		{
			printf("%d是%d位数\n", num, length);
			break;
		}
	}

	//分别输出
	printf("**********************分别输出 **********************\n");
	for (int i = 1; i <= length; i++)
	{
		printf("%d\t", (num / ((int)pow(10,length - i))) % 10);
	}
	printf("\n");

	//倒序输出
	printf("**********************倒序输出 **********************\n");
	for (int i = length; i >= 1; i--)
	{
		printf("%d\t", (num / ((int)pow(10, length - i))) % 10);
	}
	printf("\n");

    return 0;
}

