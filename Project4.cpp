// Project4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺�����������������Լ��
*/

int main()
{
	int a, b, temp;
	printf("�����������������Լ��\n");
	scanf_s("%d%d", &a, &b);

	//���b����a����ô����a��b��ֵ
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

	printf("���Լ�� = %d", b);
	return 0;
}

