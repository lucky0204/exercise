#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };
//	int input = 0;
//	printf("请输入一个数字:>");
//	scanf("%d", &input);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = left + (right - left) / 2;
//	while(left <= right)
//	{
//		if (input > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d",mid);
//			break;
//		}
//		mid= left + (right - left) / 2;
//	}
//	if (left > right)
//	{
//		printf("找不到！");
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[5] = { 0 };
//	printf("请输入一个四位数的密码:>");
//	
//	for(int i=1; i<=3; i++)
//	{
//		scanf("%s", &input);
//		if (strcmp(input, "0204") == 0)
//		{
//			printf("输入正确!");
//			break;
//		}
//		else if (i < 3)
//		{
//			printf("输入错误请重新输入");
//		}
//		else
//			printf("你没有次数了！");
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input;
//	printf("请输入一个大写字母或者小写字母来转换:>");
//	while (1) {
//		scanf("%c", &input);
//		if (input >= 97 && input <= 122)
//		{
//			input -= 32;
//			printf("%c\n", input);
//		}
//		else if (input >= 65 && input <= 90)
//		{
//			input += 32;
//			printf("%c\n", input);
//		}
//		else
//		{
//			;
//		}
//	}
//	system("pause");
//	return 0;
//}
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
//	printf("第%d个斐波那切数字为:%d\n", input, ret);
//	system("pause");
//	return 0;
//}

