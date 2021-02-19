//猜数字游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void start()
{
	printf("********************\n");
	printf("***1.开始  2.退出***\n");
	printf("********************\n");
}

void game()
{
	int ret = 0;
	int guss = 0;
	ret = rand() % 100 + 1;//rand函数生成一个随机数。对应头文件<stdlib.h>。模100+1：使生成随机数为1到100。
	//rand函数的缺陷：rand函数生成随机数的起点不会变化，所以每次重启程序后生成随机数的顺序完全相同。
	//此时需要srand函数来定义生成随机数起点。使随机数真正随机。
	while (1)
	{
		printf("请猜数字>");
		scanf("%d", &guss);
		if (guss > ret)
			printf("猜大了\n");
		else if (guss < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//srand函数：设定生成随机数起点。对应头文件：<stdlib.h>
	//time函数：时间戳函数，获取计算机当前时间生成对应数字。
	//unsigned int :无符号整形。
	//NULL:空指针。
	do
	{
		start();
		printf("请选择>");
		scanf("%d", &a);
		printf("\n");
		if (a == 1)
			game();
		else if (a == 2)
			break;
		else
			printf("选择错误，重新选择");
	} while (a);

}
//猜数字游戏
#include<stdlib.h>
#include<time.h>
void start()
{
	printf("********************\n");
	printf("***1.开始  2.退出***\n");
	printf("********************\n");
}

void game()
{
	int ret = 0;
	int guss = 0;
	ret = rand() % 100 + 1;//rand函数生成一个随机数。对应头文件<stdlib.h>。模100+1：使生成随机数为1到100。
	//rand函数的缺陷：rand函数生成随机数的起点不会变化，所以每次重启程序后生成随机数的顺序完全相同。
	//此时需要srand函数来定义生成随机数起点。使随机数真正随机。
	while (1)
	{
		printf("请猜数字>");
		scanf("%d", &guss);
		if (guss > ret)
			printf("猜大了\n");
		else if (guss < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//srand函数：设定生成随机数起点。对应头文件：<stdlib.h>
	//time函数：时间戳函数，获取计算机当前时间生成对应数字。
	//unsigned int :无符号整形。
	//NULL:空指针。
	do
	{
		start();
		printf("请选择>");
		scanf("%d", &a);
		printf("\n");
		if (a == 1)
			game();
		else if (a == 2)
			break;
		else
			printf("选择错误，重新选择");
	} while (a);

}
