#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����10��ѧ������Ϣ������ѧ�ţ����֣��ɼ���Ҫ��ͨ����������10��ѧ������Ϣ��������ÿ��һ��ѧ����Ϣ�ĸ�ʽ��ӡ������
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
	for (i = 0; i < 10; i++)//������Ϣ
	{
		printf("input number:\n");
		scanf("%d", &s[i].num);
		printf("input name:\n");
		scanf("%s", &s[i].name);
		printf("input score:\n");
		scanf("%d", &s[i].score);
	}
	printf("Number:  Name:  Score:\n");//��ӡ��ͷ
	for (i = 0; i < 10; i++)
	{
		printf("%d      %s     %d\n", s[i].num, s[i].name, s[i].score);
	}
	return 0;
}