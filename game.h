#pragma once
#define ROW 3   //#define ���ø�������;ֻ��Ķ�ROW��COL��ֵ�����ɸı����̴�С��
#define COL 3
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void Display(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
int IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
