#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("******1.play     0.exit*****\n");
	printf("****************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	Init_Board(board, ROW, COL);
	show_board(board, ROW, COL);
	while (is_win(board, ROW, COL) == 'c')
	{
		
		player_move(board, ROW, COL);
		show_board(board, ROW, COL);
		if (is_win(board, ROW, COL) == 'x')
		{
			printf("**游戏结束，玩家获胜**");
				break;
		}
		else if(is_win(board, ROW, COL) == 'p')
		{
			printf("平局");
		}
		comp_move(board, ROW, COL);
		show_board(board, ROW, COL);
		if (is_win(board, ROW, COL) == 'o')
		{
			printf("电脑获胜");
			break;
		}
		else if(is_win(board, ROW, COL) == 'p')
		{
			printf("平局");
		}
	}
}
void Init_Board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void show_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (j < col - 1)
			{
				printf("%c|", board[i][j]);
			}
			else
				printf("%c", board[i][j]);
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("------\n");
		}
	}
}
void player_move(char board[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	int count = 1;
	do
	{
		printf("玩家走:>\n");
		printf("请输入一个坐标:>\n");
		scanf("%d%d", &a, &b);
		if (0 < a&&a <= row && 0 < b&&b <= col)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = 'x';
				count--;
			}
			else
			{
				printf("该位置已经有子！\n");
			}
		}
		else
		{
			printf("坐标不合法！\n");
		}
	} while (count != 0);
}
void comp_move(char board[ROW][COL], int row, int col)
{
	printf("电脑走！\n");
	int a = 0;
	int b = 0;
	int count = 1;
	do
	{
		a = (unsigned int)rand() % 3;
		b = (unsigned int)rand() % 3;
		if (board[a][b] == ' ')
		{
			board[a][b] = 'o';
			count--;
		}
	} while (count != 0);
}
static int whether_full(char board[ROW][COL], int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j]!=' ')
			{
				count++;
			}
		}
	}
	if (count == 9)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[0][i]!=' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (whether_full(board, ROW, COL) == 0)
	{
		return 'p';
	}
	else
	{
		return 'c';
	}

}


