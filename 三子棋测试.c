#define _CRT_SECURE_NO_WARNINGS 1

//������������Ϸ
#include<stdio.h>

#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("****** 1��paly   0��exite ******\n");
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
		printf("��һ�ʤ��\n");
	if (ret == 2)
		printf("���Ի�ʤ��\n");
	if (ret == 3)
		printf("ƽ��\n");

}

void test()
{
	int a = 0;
	srand ((unsigned int)time(NULL));//time�������ص���һ��time_t��ֵ��ʹ��ǿ��ת����unsigned��������ֵת��Ϊ����
	do
	{
		menu();
		printf("���������ѡ��>:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;//break����switch��
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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
