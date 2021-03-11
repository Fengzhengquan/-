#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//思想：该递归共分为两步：
//第一步：将该数最右边的数字取出，即%10；
//第二步：加上该数左边其他数字之和。
//结束条件：该数小于10，递归即结束。
//逼近结束条件的方法：该数/10。
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