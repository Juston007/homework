// Project8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "math.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺������е�ˮ�ɻ���
ˮ�ɻ�����ָһ��3λ�������λ���������͵��ڸ�������
*/

int main()
{
	int start = 100, end = 999, temp;
	for (int i = start; i <= end; i++)
	{
		temp = 0;
		for (int j = 1; j <= 3; j++)
		{
			temp += (int)pow((i / (int)pow(10, 3 - j)) % 10, 3);
		}
		if (i == temp)
			printf("%d\n", i);
	}
    return 0;
}

