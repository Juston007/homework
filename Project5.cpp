// Project5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：百分制成绩，输出等级 A 90以上 B 80 - 89 C 70 - 79 D 60 - 69
*/

int main()
{
	int score;
	char lv;

	printf("输入成绩，输出等级\n");
	scanf_s("%d",&score);

	if (score >= 90)
	{
		lv = 'A';
	}
	else if (score >= 80)
	{
		lv = 'B';
	}
	else if (score >= 70)
	{
		lv = 'C';
	}
	else if (score >= 60)
	{
		lv = 'D';
	}

	printf("Level = %c",lv);
    return 0;
}

