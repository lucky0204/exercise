#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int fib(int in)
//{
//	if (in <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(in - 1) + fib(in - 2);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret = fib(input);
//	printf("��%d��쳲���������Ϊ:%d\n", input, ret);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
fact(int x,int y)
{
	if (y > 0)
	{
		return x * fact(x, y - 1);
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	int k = 0;
	printf("������һ������:>");
	scanf("%d", &n);
	printf("������һ��ָ��:>");
	scanf("%d", &k);
	int ret = fact(n,k);
	printf("n^k�Ľ����%d\n",ret);
	system("pause");
	return 0;
}