#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ͳ���������ֲ�����1�ĸ�����
//����һ��ģ2��2��
//int count_bit_one(unsigned int a)//unsigned :�������޷��Ż�������Ӧ��aΪ�����������
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}

//��������������1��
//˼�룺����a��1���а�λ�������1ֻ������һλΪ1������λ��Ϊ0��������λ��λ���Ϊ0��a����λ��Ϊ1����Ϊ1��
//Ȼ��a������һλ���ٴν��а�λ��1�������жϵڶ�λ�Ƿ�Ϊ1�����������ٰ�λ��1����ͳ��a��1�ĸ�����
//int count_bit_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<32; i++)
//	{
//		if ((a & 1) == 1)
//			count++;
//		a = a >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}

//����3��a=a&(a-1)
//˼�룺ע�⵽a=a&(a-1),������ȥa�����ұߵ�1��ֱ��a=0��ѭ��ֹͣ��
int count_bit_one(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}//ͳ���������ֲ�����1�ĸ�����
//����һ��ģ2��2��
//int count_bit_one(unsigned int a)//unsigned :�������޷��Ż�������Ӧ��aΪ�����������
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}

//��������������1��
//˼�룺����a��1���а�λ�������1ֻ������һλΪ1������λ��Ϊ0��������λ��λ���Ϊ0��a����λ��Ϊ1����Ϊ1��
//Ȼ��a������һλ���ٴν��а�λ��1�������жϵڶ�λ�Ƿ�Ϊ1�����������ٰ�λ��1����ͳ��a��1�ĸ�����
//int count_bit_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<32; i++)
//	{
//		if ((a & 1) == 1)
//			count++;
//		a = a >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}

//����3��a=a&(a-1)
//˼�룺ע�⵽a=a&(a-1),������ȥa�����ұߵ�1��ֱ��a=0��ѭ��ֹͣ��
int count_bit_one(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}//ͳ���������ֲ�����1�ĸ�����
//����һ��ģ2��2��
//int count_bit_one(unsigned int a)//unsigned :�������޷��Ż�������Ӧ��aΪ�����������
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}

//��������������1��
//˼�룺����a��1���а�λ�������1ֻ������һλΪ1������λ��Ϊ0��������λ��λ���Ϊ0��a����λ��Ϊ1����Ϊ1��
//Ȼ��a������һλ���ٴν��а�λ��1�������жϵڶ�λ�Ƿ�Ϊ1�����������ٰ�λ��1����ͳ��a��1�ĸ�����
//int count_bit_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<32; i++)
//	{
//		if ((a & 1) == 1)
//			count++;
//		a = a >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_one(a);
//	printf("%d", count);
//	return 0;
//}

//����3��a=a&(a-1)
//˼�룺ע�⵽a=a&(a-1),������ȥa�����ұߵ�1��ֱ��a=0��ѭ��ֹͣ��
int count_bit_one(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}