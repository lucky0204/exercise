#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
void menu()
{
	printf("************************************\n");
	printf("*********1.play        2.exi********\n"); 
	printf("************************************\n");
}
void game()
{
	char mine_board[ROWS][COLS] = { 0 };
	char show_board[ROWS][COLS] = { 0 };
	init_board(mine_board, show_board,ROWS, COLS);
	set_torp(mine_board);
	game_board(mine_board, ROW, COL);
	int rec = 0;
	do
	{
		rec = 10;
		rec = check_win(mine_board, show_board);
		if (rec == 1)
		{
			game_board(show_board, ROW, COL);
			
		}
		else
		{
			game_board(mine_board, ROW, COL);
		}
		if (win(show_board) == 10)

		{
			break;
		}
	} while (rec);
	if (win(show_board) == 10)
	{
		printf("您胜利了\n");
		printf("这是雷的分布！\n");
		game_board(mine_board, ROW, COL);
		printf("你的棋盘\n");
		game_board(show_board, ROW, COL);

	}
}

void init_board(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mine_board[i][j] = '0';
		}
	} 
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			show_board[i][j] = '*';
		}
	}
	
}

void set_torp(char mine_board[ROWS][COLS])
{
	int count = torp;
	do
	{
		int a = (unsigned)rand() % ROW+1;
		int b = (unsigned)rand() % COL+1;
			mine_board[a][b] = '1';
			count--;
	} while (count != 0);
}
void game_board(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i < row+1; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <col+1; j++)
		{
			if (i < 1)
			{
				printf("%d ", j);
			}
			else
			{
				printf("%c ", board[i][j]);
			}
		}
		printf("\n");
	}
}

int check_win(char mine_board[ROWS][COLS], char show_board[ROWS][COLS])
{
	int a = 0;
	int b = 0;
	
	do
	{
		
		printf("请输入坐标:>\n");
		scanf("%d%d", &a, &b);
		if (0 < a&&a < 10 && 0 < b&&b < 10)
		{
			if (mine_board[a][b] == '1')
			{
				printf("你被炸死了\n");
				
				return 0;//被炸死
			}
			else if (mine_board[a][b] == '0') 
			{
				count_torp(mine_board, show_board, a, b);
				open(mine_board, show_board,a,b);
				printf("这个不是雷啊哈哈\n");
				
				return 1;
			}
		}
		else
		{
			printf("您输入的坐标有误请重新输入\n");
			
		}
	} while (mine_board[a][b] != '1');
}
  void count_torp(char mine_board[ROWS][COLS],char show_board[ROWS][COLS], int a, int b)
{
	show_board[a][b]=mine_board[a - 1][b - 1] +
		mine_board[a][b - 1] +
		mine_board[a + 1][b - 1] +
		mine_board[a - 1][b] +
		mine_board[a + 1][b] +
		mine_board[a - 1][b + 1] +
		mine_board[a][b + 1] +
		mine_board[a + 1][b + 1] -
		7 * '0';
}

  void open(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int a, int b)
  {
	  if (mine_board[a - 1][b - 1] != '1')
	  {
		  count_torp(mine_board, show_board, a-1, b-1);
	  }
	  if (mine_board[a][b - 1] != '1')
	  {
		  count_torp(mine_board, show_board, a , b - 1);
	  }
	  if (mine_board[a + 1][b - 1] != '1')
	  {
		  count_torp(mine_board, show_board, a + 1, b - 1);
	  }
	  if (mine_board[a - 1][b] != '1')
	  {
		  count_torp(mine_board, show_board, a - 1, b );
	  }
	  if (mine_board[a + 1][b] != '1')
	  {
		  count_torp(mine_board, show_board, a + 1, b);
	  }
	  if (mine_board[a - 1][b + 1] != '1')
	  {
		  count_torp(mine_board, show_board, a - 1, b + 1);
	  }
	  if (mine_board[a][b + 1] != '1')
	  {
		  count_torp(mine_board, show_board, a , b + 1);
	  }
	  if (mine_board[a + 1][b + 1] != '1')
	  {
		  count_torp(mine_board, show_board, a + 1, b + 1);
	  }
  }

  int win(char show_board[ROWS][COLS])
  {
	  int count = 0;
	  for (int i = 1; i < ROWS - 1; i++)
	  {
		  for (int j = 1; j < COLS - 1; j++)
		  {
			  if (show_board[i][j] == '*')
			  {
				  count++;
			  }
		  }
	  }
	  return count;
  }