
//编写函数实现两个长度相同数组的元素互换
//注意！！不能使用arr3[sz]来定义第三个数组，实现两个数组的交换；
//原因：定义数组arr3[]时，[]中的值必须是一个常量表达式，不能是变量！！
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void change(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = 0;
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

void arr_print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n ");
}

int main()
{
	int arr1[] = { 0,1,2,3,4 };
	int arr2[] = { 5,6,7,8,9 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	arr_print(arr1, sz);
	arr_print(arr2, sz);
	change(arr1, arr2, sz);
	arr_print(arr1, sz);
	arr_print(arr2, sz);
	return 0;
}