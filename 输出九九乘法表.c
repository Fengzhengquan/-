//����Ļ�ϴ�ӡ��9*9�ĳ˷��ھ���
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a = i * j;
			printf("%d*%d=%d ", j, i, a);
		}
		printf("\n");
	}
		return 0;
}