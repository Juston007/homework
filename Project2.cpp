// Project2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdio.h"

/*
���ߣ�Juston
ʱ�䣺20191116
��飺��дһ��C��������ʱ����a��b��c����ֵ���������ֵ�����
*/

int main()
{
	int a, b, c,max;

	printf("�����������֣�������ֵ��\n");

	scanf_s("%d%d%d", &a, &b, &c);

	max = a;
	max = a > b ? a : b;
	max = b > c ? b : c;

	printf("max = %d\n",max);

    return 0;
}

