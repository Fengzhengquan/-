#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ��
//ȱ�㣺1����arr1����arr2�ڽ��д���ʱ������Ϊ��ָ�룬my_strcpy�еĽ����ò����ͻᱨ�������޷�����ִ�С�
//      2���������໹���Ծ���
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

//��������
//1��ʹ��assert�꣬��֤p1,p2��Ϊ��ָ�롣
//2��ʹ��const������*p1���ܱ��ı䣬��ֹ���ֽ����ƺ�ճ���Ķ���ߵ��������
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