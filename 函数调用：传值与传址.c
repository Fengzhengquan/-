//ͨ�������ķ�ʽд��������������ֵ
//*��ֵ���úʹ�ַ����
//����汾����ֵ���ã�
void swap(int x,int y)//�����޷���ֵ��ʹ��void���塣
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
//�����a=10,b=20��
//����ԭ��x,y�Ĵ����ַ��a,b�Ĵ����ַ���໥�����ġ�swap����ֻ����x��y��ֵ����Ϊ����a,b��ֵ���������ab��ֵ��δ������

//��ȷ�汾����ַ���ã�
void swap(int* pa, int* pb)//int* ���ڶ���ָ�������pa,pbΪָ������ֱ����a��b�ĵ�ַ��
{
	int c = 0;
	c = *pa;//*Ϊ�����ò�������*pa����pa��ַ��Ӧ�ı���a;
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