// Project7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
*/

int main()
{
	int letterCount = 0, spaceCount = 0, otherCount = 0;
	char str[100], temp;
	printf("����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���\n");
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

