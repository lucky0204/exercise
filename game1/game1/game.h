#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
void game();
#define ROW 3
#define COL 3
void Init_Board(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void show_board(char board[ROW][COL], int row, int col);
void player_move(char board[ROW][COL], int row, int col);
void comp_move(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);