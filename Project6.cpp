// Project6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "math.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺����һ��������5����������������Ǽ�λ�����ֱ����ÿһλ���֣��������
*/

int main()
{
	int num,length;
	printf("����һ��������5����������������Ǽ�λ�����ֱ����ÿһλ���֣��������\n");
	scanf_s("%d",&num);

	//�������Ǽ�λ��
	printf("**********************��λ��**********************\n");
	for (length = 0; length <= 5; length++)
	{
		if ((num / (int)pow(10, length)) == 0)
		{
			printf("%d��%dλ��\n", num, length);
			break;
		}
	}

	//�ֱ����
	printf("**********************�ֱ���� **********************\n");
	for (int i = 1; i <= length; i++)
	{
		printf("%d\t", (num / ((int)pow(10,length - i))) % 10);
	}
	printf("\n");

	//�������
	printf("**********************������� **********************\n");
	for (int i = length; i >= 1; i--)
	{
		printf("%d\t", (num / ((int)pow(10, length - i))) % 10);
	}
	printf("\n");

    return 0;
}

