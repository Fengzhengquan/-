#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//方法一：
//缺点：1、当arr1或者arr2在进行传参时，输入为空指针，my_strcpy中的解引用操作就会报错。程序无法正常执行。
//      2、程序冗余还可以精简。
//void my_strcpy(char* p1, char* p2)
//{
//	while (*p1 != '\0')
//	{
//		*p2 = *p1;
//		p1++;
//		p2++;
//	}
//	*p2 = '\0';
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "###########";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr2);
//	return 0;
//}

//方法二：
//1、使用assert宏，保证p1,p2不为空指针。
//2、使用const来限制*p1不能被改变，防止出现将复制和粘贴的对象颠倒的情况。
#include<assert.h>
char* my_strcpy(char const* p1, char* p2)
{
	char* tmp = p2;
	assert(p1 != NULL);
	assert(p2 != NULL);
	while (*p2++ = *p1++)
	{
		;
	}
	*p2 = '\0';
	return tmp;
}

int main()
{
	char arr1[] = "hello";
	char arr2[] = "###########";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}