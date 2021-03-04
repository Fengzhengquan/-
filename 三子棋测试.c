#define _CRT_SECURE_NO_WARNINGS 1

//测试三子棋游戏
#include<stdio.h>

#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("****** 1、paly   0、exite ******\n");
	printf("********************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL );
	Display(board, ROW,COL);
	int ret = 0;
	while (1)
	{
		playermove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
		Computermove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
	}
	if (ret == 1)
		printf("玩家获胜！\n");
	if (ret == 2)
		printf("电脑获胜！\n");
	if (ret == 3)
		printf("平局\n");

}

void test()
{
	int a = 0;
	srand ((unsigned int)time(NULL));//time函数返回的是一个time_t的值，使用强制转化：unsigned，将返回值转化为整形
	do
	{
		menu();
		printf("请输入你的选择>:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;//break跳出switch；
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} 
	while (a);
}
int main()
{
	test();
	return 0;
}
