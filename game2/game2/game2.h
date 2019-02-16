#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 1


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define torp 10

void menu();
void game();
void init_board(char mine_board[ROWS][COLS],char show_board[ROWS][COLS], int rows, int cols);
void set_torp(char mine_board[ROWS][COLS]);
void game_board(char board[ROWS][COLS], int row, int col);
int  check_win(char mine_board[ROWS][COLS], char show_board[ROWS][COLS]);
void count_torp(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int a, int b);
void open(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int a, int b);
int win(char show_board[ROWS][COLS]);