// Project9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
/*
���ߣ�Juston
ʱ�䣺20191116
��飺�������������е�ǰ20��֮��
2 / 1 ��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13....
*/

int main()
{
	//������ǰһ��������ĸ֮�ͣ���ĸ��ǰһ�����
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

