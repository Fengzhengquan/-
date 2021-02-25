//汉诺塔问题 ：有三根杆(编号A、B、C)，在A杆自下而上、由大到小按顺序放置64个金盘(如下图)。
//游戏的目标：把A杆上的金盘全部移到C杆上，并仍保持原有顺序叠好。
//操作规则：每次只能移动一个盘子，并且在移动过程中三根杆上都始终保持大盘在下，小盘在上，操作过程中盘子可以置于A、B、C任一杆上。
//解决方法：使用两个函数递归。
void Hanoi_tower(char a, char b, char c, int n)//将n个盘子由a移到c;
{
	if (n == 1)
		printf("将盘子%d由%c移到%c\n", n, a, c);
	else
	{
		Hanoi_tower(a, c, b, n - 1);//先将n-1个盘子由a到b；
		printf("将盘子%d由%c移到%c\n", n, a, c);
		Hanoi_tower(b, a, c, n - 1);//再将n-1个盘子由b移到c;

	}
}
int main()
{
	int n = 0;
	printf("输入金盘数>:");
	scanf("%d", &n);
	Hanoi_tower('a', 'b', 'c', n);
}




