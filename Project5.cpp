// Project5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺�ٷ��Ƴɼ�������ȼ� A 90���� B 80 - 89 C 70 - 79 D 60 - 69
*/

int main()
{
	int score;
	char lv;

	printf("����ɼ�������ȼ�\n");
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

