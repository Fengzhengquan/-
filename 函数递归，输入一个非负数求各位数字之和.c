#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//˼�룺�õݹ鹲��Ϊ������
//��һ�������������ұߵ�����ȡ������%10��
//�ڶ��������ϸ��������������֮�͡�
//��������������С��10���ݹ鼴������
//�ƽ����������ķ���������/10��
int Digt_Sum(int a)
{
	if (a > 9)
		return Digt_Sum(a / 10) + a % 10;
	else
		return a % 10;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", Digt_Sum(a));
	return 0;
}