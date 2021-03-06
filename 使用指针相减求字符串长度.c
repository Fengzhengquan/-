#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "fzq";
	int a = my_strlen(arr);
	printf("%d\n", a);
	return 0;
}