#pragma once
#define ROW 3   //#define 后不用跟‘：’;只需改动ROW和COL的值，即可改变棋盘大小。
#define COL 3
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void Display(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
int IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
