#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i <= 9; i++)
	{
		printf("������һ��������");
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
	printf("�������ʮ�����ְ��Ӵ�С����Ϊ��");
	for (int j = 0; j <= 9; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n�������ʮ����������������Ϊ%d\n", arr[0]);
	system("pause");
	return 0;
}