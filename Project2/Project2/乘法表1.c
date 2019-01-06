#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		j = 1;
		if (i > 1)
		{
			printf("\n");
		}
		while (j <= i)
		{
			printf("%d*%d=%d\t", j, i, i*j);
			j++;
		}
	}
	system("pause");
	return  0;
}