#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	scanf("%d%d", &i, &j);
	printf("����ǰ%d %d\n", i, j);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("���к�%d %d\n", i, j);
	system("pause");
	return 0;
}