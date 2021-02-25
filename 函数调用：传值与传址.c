//通过函数的方式写交换两个变量的值
//*传值调用和传址调用
//错误版本（传值调用）
void swap(int x,int y)//函数无返回值，使用void定义。
{
	int c = 0;
	c = x;
	x = y;
	y = c;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a,b);
	printf("a=%d,b=%d", a, b);
	return 0;

}
//输出：a=10,b=20。
//错误原因：x,y的储存地址与a,b的储存地址是相互独立的。swap函数只交换x、y的值，而为交换a,b的值，导致输出ab的值并未交换。

//正确版本（传址调用）
void swap(int* pa, int* pb)//int* 用于定义指针变量，pa,pb为指针变量分别代表a和b的地址。
{
	int c = 0;
	c = *pa;//*为解引用操作符，*pa代表pa地址对应的变量a;
	*pa = *pb;
	*pb = c;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;
}