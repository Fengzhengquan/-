//ʹ��ð�ݷ�����һ��������������
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)//����ð�ݱȽ϶���Ȧ
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)//����һȦ�Ƚ϶��ٸ�
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//��һȦ�д���λ�õ�������flag��Ϊ0��
			}
		}
		if (flag == 1)//flag==1,��һȦ�в�����λ�õ�������������˳����Ϊ�������У���ֱ������ѭ��
			break;
	}
}

int main()
{
	int arr[] = { 1,5,6,3,7,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}