#define _CRT_SECURE_NO_WARNINGS 1
//���ú���ʵ�ִ�ӡ�˷���
//#include <stdio.h>
//#include <stdlib.h>
//void MUL_out(int x)
//{
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	MUL_out(input);
//	system("pause");
//	return 0;
//}
//���ú���ʵ���������ֵĽ���
//#include <stdio.h>
//#include <stdlib.h>
//void Num_Ec(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a, b);
//	Num_Ec(&a,&b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//void init(int* x, int sz)//��ʼ�����麯��
//{
//	int input = 0;
//	printf("��������������ʼ������:>\n");
//	for (int i = 1; i <= sz; i++)
//	{
//		scanf("%d", &input);
//		*x = input;
//		x++;
//	}
//}
//void empty(int *x,int sz)//������麯��
//{
//	for (int i = 1; i <= sz; i++)
//	{
//		*x = 0;
//		x++;
//	}
//}
//void reverse(int* x, int sz)//�������麯��
//{
//	int i = 0;
//	for (int i = 0; i < sz / 2; i++)
//	{
//		int tmp = 0;
//		tmp = *(x + i);
//		*(x + i) = *(x + sz - (i + 1));
//		*(x + sz - (i + 1)) = tmp;
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(int);
//	init(arr, sz);
//	printf("ִ�г�ʼ������֮�������Ϊ:>");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	reverse(arr, sz);
//	printf("ִ�����ú���֮�������Ϊ:>");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	empty(arr, sz);
//	printf("ִ����պ���֮�������Ϊ:>");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
Judge_Prm(int x)
{
	int count = 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if(x%i==0)
		count++;
	}
	if (count == 0)
	{
		printf("%d������",x);
	}
	else
	{
		printf("����������");
	}
}
int main()
{	
	int input = 0;
	scanf("%d", &input);
	Judge_Prm(input);
	system("pause");
	return 0;
}

