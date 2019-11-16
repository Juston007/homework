// Project7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/*
作者：Juston
时间：20191116
简介：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
*/

int main()
{
	int letterCount = 0, spaceCount = 0, otherCount = 0;
	char str[100], temp;
	printf("输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数\n");
	gets_s(str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		temp = str[i];
		if ((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z'))
			letterCount++;
		else if (temp == ' ')
			spaceCount++;
		else
			otherCount++;
	}

	printf("LetterCount = %d SpaceCount = %d OtherCount = %d", letterCount, spaceCount, otherCount);
	return 0;
}

