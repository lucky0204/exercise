#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
	}
	system("pause");
	return 0;
}