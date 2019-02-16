#include "game.h"
int main()
{
	srand(time(NULL));
	int input;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("非法输入！\n");
		}
	} while (input);
	system("pause");
	return 0;
}