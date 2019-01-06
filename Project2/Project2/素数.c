#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i, j;
	int flag = 0;
	for (i = 100; i < 201; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
			{
				flag++;
			}
		}
		if (flag == 1)
		{
			printf("%d\t", i);
		}
		flag = 0;
	}
	system("pause");
	return 0;
}