﻿//依字符由外向内打印“Happy New Year!!!”

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "Happy New Year!!!";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;//strlen函数用于测量数组长度(不包含\n),对应头文件为 string.h
	while (1)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		if (left > right)
		{
			break;
		}
		Sleep(1000);//Slepp函数使进程休眠，1000表示休息1000ms,对应头文件为 windows.h
		system("cls");//system函数执行系统命令，cls清空屏幕，system对应头文件为 stdlib.h
	}
	return 0;
}