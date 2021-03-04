#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
#include<stdio.h>

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

};

void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row-1; i++)
	{
		for (j = 0; j <= col-1; j++)
		{
			if (j < col - 1)
			printf(" %c |", board[i][j]);
			else
				printf(" %c \n",board[i][j]);
		}
		for (j = 0; j <= col-1; j++)
		{
			if (j < col - 1)
			printf("---|");
			else
				printf("---\n");

		}
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("到您了：>\n");
	while (1)
	{
		printf("请输入要下的坐标：>\n");
	scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')//数组中的符号要用单引号括起来。
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("输入错误，请重新输入：>\n");
		}
		else
		{
			printf("输入错误，请重新输入：>\n");
		}
	}
	Display(board, ROW, COL);
}

void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
	x = rand() % row;
	y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	Display(board, ROW, COL);
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

int IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] == '*')
				return 1;
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] == '#')
				return 2;
	}
	for (j = 0; j < col; j++)
	{
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] == '*')
				return 1;
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] == '#')
				return 2;
	}
	for (i = 0; i < row; i++)
	{
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == '*')
				return 1;
			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == '*')
				return 1;
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] == '#')
				return 2;
			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == '#')
				return 2;
	}
	if (1 == IsFull(board, row, col))
		return 3;
	else
		return 0;
}