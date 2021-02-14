//求1到n的阶乘和（调用函数版）
//int ret(int m)
//{
//	int i = 0;
//	int a = 1;
//		for(i=1;i<=m;i++)
//		{
//			a = a * i;
//		}
//		return a;
//}
//int main()
//{
//	int n = 0;
//	int j = 0;
//	int sum = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		m = j;
//		sum = sum + ret(m);
//	}
//	printf("%d的阶乘和=%d", n, sum);
//	return 0;
//}


//求1到n的阶乘和（优化版）
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i = 1;i <= n;i++ )
//	{
//		a = a * i;
//		sum = sum + a;
//	}
//		printf("%d的阶乘之和=%d", n, sum);
//		return 0;
//}


