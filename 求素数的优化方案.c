//求100到200间的素数及其个数
//int main()
//{
//	int i = 1;
//	int a = 1;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (a = 2; a < i; a++)
//		{
//			if (i % a == 0)
//				break;
//		}
//		if (a >= i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//求100到200间的素数及其个数,优化方案。引入了sqrt函数，能优化进一半的计算步骤。


#include<math.h>
int main()
{
	int i = 1;
	int a = 1;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (a = 2; a <= sqrt(i); a++)//sqrt函数为开平方函数，对应头文件math.h
		{
			if (i % a == 0)
				break;
		}
		if (a > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}