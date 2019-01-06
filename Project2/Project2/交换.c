#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d%d", &i, &j);
	printf("交换前\n");
	printf("%d %d\n", i, j);
	k = i;
	i = j;
	j = k;
	printf("交换后\n");
	printf("%d %d\n", i, j);
	system("pause");
	return 0;
}