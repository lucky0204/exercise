#include "game.h"
int main()
{
	srand(time(NULL));
	int input;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�Ƿ����룡\n");
		}
	} while (input);
	system("pause");
	return 0;
}