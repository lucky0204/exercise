#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
int main()
{
	srand(time(NULL));
	int input = 0;
		do
		{
			menu();
			printf("������:>\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("�������\n");
				break;
			}
		} while (input != 0);
		system("pause");
		return 0;
}