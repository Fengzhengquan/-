//求1-100中含9的数字的个数
//思想：个位含9的数字模10等于9，十位含9的数字除10等于9。
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		else if (i / 10 == 9)
			count++;
	}
	printf("%d", count);
	return 0;
}