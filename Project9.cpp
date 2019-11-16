// Project9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：输出下面分数序列的前20项之和
2 / 1 ，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13....
*/

int main()
{
	//分子是前一项分子与分母之和，分母是前一项分子
	int count = 20,sum = 0,son = 2,mother = 1,temp;
	for (int i = 0; i <= count; i++)
	{
		sum += son / mother;
		temp = son;
		son += mother;
		mother = temp;
	}
	printf("sum = %d\n",sum);
    return 0;
}

