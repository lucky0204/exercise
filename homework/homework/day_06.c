#define _CRT_SECURE_NO_WARNINGS 1
//利用函数实现打印乘法表
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
//利用函数实现两个数字的交换
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
//void init(int* x, int sz)//初始化数组函数
//{
//	int input = 0;
//	printf("请输入数字来初始化数组:>\n");
//	for (int i = 1; i <= sz; i++)
//	{
//		scanf("%d", &input);
//		*x = input;
//		x++;
//	}
//}
//void empty(int *x,int sz)//清空数组函数
//{
//	for (int i = 1; i <= sz; i++)
//	{
//		*x = 0;
//		x++;
//	}
//}
//void reverse(int* x, int sz)//逆置数组函数
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
//	printf("执行初始化函数之后的数组为:>");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	reverse(arr, sz);
//	printf("执行逆置函数之后的数组为:>");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	empty(arr, sz);
//	printf("执行清空函数之后的数组为:>");
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
		printf("%d是素数",x);
	}
	else
	{
		printf("不是素数！");
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

