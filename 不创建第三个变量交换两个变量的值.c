#include<stdio.h>
//不创建第三个变量，交换两个变量的值

//方法一：加减法
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("交换前，a=%d,b=%d", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后，a=%d,b=%d", a, b);
//	return 0;
//}
//加减法的缺点：因为a和b有位数的限制，既有上限值。可能会存在a和b都较大时，a+b超出存储上限的情况。

//方法二：异或法
//思想：使用a与b异或生成一个机密钥匙。b的值与密钥异或，输出a的值。a的值与密钥异或，输出b的值，即可完成交换。
int main()
{
	int a = 5;
	int b = 3;
	printf("交换前，a=%d,b=%d", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后，a=%d,b=%d", a, b);
	return 0;
}