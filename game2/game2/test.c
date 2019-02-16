#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
int main()
{
	srand(time(NULL));
	int input = 0;
		do
		{
			menu();
			printf("请输入:>\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("输入错误\n");
				break;
			}
		} while (input != 0);
		system("pause");
		return 0;
}