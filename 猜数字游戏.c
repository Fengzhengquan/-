//��������Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void start()
{
	printf("********************\n");
	printf("***1.��ʼ  2.�˳�***\n");
	printf("********************\n");
}

void game()
{
	int ret = 0;
	int guss = 0;
	ret = rand() % 100 + 1;//rand��������һ�����������Ӧͷ�ļ�<stdlib.h>��ģ100+1��ʹ���������Ϊ1��100��
	//rand������ȱ�ݣ�rand�����������������㲻��仯������ÿ����������������������˳����ȫ��ͬ��
	//��ʱ��Ҫsrand���������������������㡣ʹ��������������
	while (1)
	{
		printf("�������>");
		scanf("%d", &guss);
		if (guss > ret)
			printf("�´���\n");
		else if (guss < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//srand�������趨�����������㡣��Ӧͷ�ļ���<stdlib.h>
	//time������ʱ�����������ȡ�������ǰʱ�����ɶ�Ӧ���֡�
	//unsigned int :�޷������Ρ�
	//NULL:��ָ�롣
	do
	{
		start();
		printf("��ѡ��>");
		scanf("%d", &a);
		printf("\n");
		if (a == 1)
			game();
		else if (a == 2)
			break;
		else
			printf("ѡ���������ѡ��");
	} while (a);

}
//��������Ϸ
#include<stdlib.h>
#include<time.h>
void start()
{
	printf("********************\n");
	printf("***1.��ʼ  2.�˳�***\n");
	printf("********************\n");
}

void game()
{
	int ret = 0;
	int guss = 0;
	ret = rand() % 100 + 1;//rand��������һ�����������Ӧͷ�ļ�<stdlib.h>��ģ100+1��ʹ���������Ϊ1��100��
	//rand������ȱ�ݣ�rand�����������������㲻��仯������ÿ����������������������˳����ȫ��ͬ��
	//��ʱ��Ҫsrand���������������������㡣ʹ��������������
	while (1)
	{
		printf("�������>");
		scanf("%d", &guss);
		if (guss > ret)
			printf("�´���\n");
		else if (guss < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));//srand�������趨�����������㡣��Ӧͷ�ļ���<stdlib.h>
	//time������ʱ�����������ȡ�������ǰʱ�����ɶ�Ӧ���֡�
	//unsigned int :�޷������Ρ�
	//NULL:��ָ�롣
	do
	{
		start();
		printf("��ѡ��>");
		scanf("%d", &a);
		printf("\n");
		if (a == 1)
			game();
		else if (a == 2)
			break;
		else
			printf("ѡ���������ѡ��");
	} while (a);
	return 0;
}
