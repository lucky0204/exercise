#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//�˷������whileѭ��
/*int main()
{
	int i,j;
	
	for (i = 1; i < 10; i++)
	{
		j = 1;
		if (i > 1)
		{
			printf("\n");
		}
		while (j<=i) 
		{
			printf("%d*%d=%d\t", j, i, i*j);
			j++;
		}
	}
	system("pause");
	return  0;
//�˷���forѭ��
int main() 
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
	}
	system("pause");
	return 0;
}
*/
//100��200֮�������
/*int main()
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
*/
//���1000��2000��֮�������
/*int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0||year%400==0)
		{
			printf("%d\t", year);
		}
	}
	system("pause");
	return 0;
}
*/
/*void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
	}
	system("pause");
	}

*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//������������ֵ
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d%d", &i, &j);
	printf("����ǰ\n");
	printf("%d %d\n", i, j);
	k = i;
	i = j;
	j = k;
	printf("������\n");
	printf("%d %d\n", i, j);
	system("pause");
	return 0;
}
*/
//�����м���������������ĵ�ֵ
/*#include <stdio.h>
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
*/
/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i <= 9; i++)
	{
		printf("������һ��������");
		scanf("%d", &arr[i]);
		for(int k = 0; k < i; k++)
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
*/
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("������һ��������");
//		scanf("%d", &arr[i]);
//		for (int k = 0; k < i; k++)
//		{
//			if (arr[i] > arr[k])
//			{
//				arr[i] = arr[i] ^ arr[k];
//				arr[k] = arr[i] ^ arr[k];
//				arr[i] = arr[i] ^ arr[k];
//			}
//		}
//	}
//	printf("\n��������������ִӴ�С����Ϊ��");
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%d ", arr[j]);
//
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int arr1[5] = { 1,5,6,8,7 };
//	int arr2[5] = { 5,9,45,89,60 };
//	for (int i = 0; i < 5; i++)
//	{
//		arr1[i] = arr1[i] ^ arr2[i];
//		arr2[i] = arr1[i] ^ arr2[i];
//		arr1[i] = arr1[i] ^ arr2[i];
//	}
//	printf("�������arr1:\n");
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\n�������arr2:\n");
//	for (int l = 0; l < 5; l++)
//	{
//		printf("%d ", arr2[l]);
//	}
//	system("pause");
//	return 0;
//}
//1-1/2+1/3...+1/99-1/100��ֵ
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int a = 1;
//	float sum = 0.0;
//	float temp = 0.0;
//	while (a <= 100)
//	{
//		temp = pow(-1, a + 1);
//		sum = sum + temp * 1 / a;
//		a++;
//	}
//	printf("ֵΪ��%f\n", sum);
//	system("pause");
//	return 0;
//}
//��������9�Ĵ���
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 0; i <=100 ; i++)
//	{
//		if (i % 10 == 9)
//			sum++;
//		if (i / 10 == 9)
//			sum++;
//	}
//	printf("1��100֮��9�ĸ���Ϊ��%d\n", sum);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int *p;
	int a = 10;
	p = &a;
	printf("%d", *p);
	system("pause");
	return 0;
}

