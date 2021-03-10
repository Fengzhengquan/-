#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//统计任意数字补码中1的个数。
//方法一：模2除2法
//int count_bit_one(unsigned int a)//unsigned :将数字无符号化。用以应对a为负数的情况。
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

//方法二：右移与1法
//思想：数字a与1进行按位与操作。1只有最右一位为1，其他位皆为0，则其他位按位与皆为0，a最右位若为1则结果为1；
//然后将a向右移一位，再次进行按位与1。即可判断第二位是否为1。依次右移再按位与1，可统计a中1的个数。
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

//方法3：a=a&(a-1)
//思想：注意到a=a&(a-1),可以消去a中最右边的1。直到a=0，循环停止。
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
}//统计任意数字补码中1的个数。
//方法一：模2除2法
//int count_bit_one(unsigned int a)//unsigned :将数字无符号化。用以应对a为负数的情况。
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

//方法二：右移与1法
//思想：数字a与1进行按位与操作。1只有最右一位为1，其他位皆为0，则其他位按位与皆为0，a最右位若为1则结果为1；
//然后将a向右移一位，再次进行按位与1。即可判断第二位是否为1。依次右移再按位与1，可统计a中1的个数。
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

//方法3：a=a&(a-1)
//思想：注意到a=a&(a-1),可以消去a中最右边的1。直到a=0，循环停止。
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
}//统计任意数字补码中1的个数。
//方法一：模2除2法
//int count_bit_one(unsigned int a)//unsigned :将数字无符号化。用以应对a为负数的情况。
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

//方法二：右移与1法
//思想：数字a与1进行按位与操作。1只有最右一位为1，其他位皆为0，则其他位按位与皆为0，a最右位若为1则结果为1；
//然后将a向右移一位，再次进行按位与1。即可判断第二位是否为1。依次右移再按位与1，可统计a中1的个数。
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

//方法3：a=a&(a-1)
//思想：注意到a=a&(a-1),可以消去a中最右边的1。直到a=0，循环停止。
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