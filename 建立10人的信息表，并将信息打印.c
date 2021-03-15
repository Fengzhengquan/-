#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//建立10名学生的信息表，包括学号，名字，成绩，要求通过键盘输入10名学生的信息，并按照每行一名学生信息的格式打印出来。
struct stu
{
	int num;
	char name[20];
	int score;
};

int main()
{
	int i = 0;
	struct stu s[10];
	for (i = 0; i < 10; i++)//输入信息
	{
		printf("input number:\n");
		scanf("%d", &s[i].num);
		printf("input name:\n");
		scanf("%s", &s[i].name);
		printf("input score:\n");
		scanf("%d", &s[i].score);
	}
	printf("Number:  Name:  Score:\n");//打印表头
	for (i = 0; i < 10; i++)
	{
		printf("%d      %s     %d\n", s[i].num, s[i].name, s[i].score);
	}
	return 0;
}