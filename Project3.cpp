// Project3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺��100-200֮��������������
*/

int main()
{
	//���� ������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����
	int start = 100, end = 200;
	int flag = 1;
	for (int i = start; i < end; i++)
	{
		//flag = 1;
		for (int j = 2; j < i; j++)
		{
			if ((flag = (i % j)) == 0)
				break;
		}
		if (flag)
			printf("%d\n", i);
	}
	return 0;
}

