#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i <= 9; i++)
	{
		printf("请输入一个整数：");
		scanf("%d", &arr[i]);
		for (int k = 0; k < i; k++)
		{
			if (arr[i] > arr[k])
			{
				arr[i] = arr[i] ^ arr[k];
				arr[k] = arr[i] ^ arr[k];
				arr[i] = arr[i] ^ arr[k];
			}
		}
	}
	printf("您输入的十个数字按从大到小排列为：");
	for (int j = 0; j <= 9; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n您输入的十个数字里最大的数字为%d\n", arr[0]);
	system("pause");
	return 0;
}