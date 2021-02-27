//1、使用循环语句：
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "fzq";
	printf("字符串长度为%d", my_strlen(arr));
	return 0;
}

//2、使用函数递归，不创造临时变量；
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		str++;
		return 1 + my_strlen(str);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "fzq";
	printf("字符串长度为%d", my_strlen(arr));
	return 0;
}