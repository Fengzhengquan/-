//接受一个整形数值，按照顺序依次打印出每一位。使用函数递归。
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d", n % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}