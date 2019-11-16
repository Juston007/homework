// Project1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


/*
作者：Juston
时间：20191116
*/

/*
编写一个C程序输出以下图形
*****
  *****
    *****
      *****
*/

int main()
{
	for (int  i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < i * 2; j++)
		{
			printf(" ");
		}
		printf("*****\n");
	}
	getchar();
    return 0;
}

