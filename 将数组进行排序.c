//使用冒泡法，将一个数组升序排列
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)//决定冒泡比较多少圈
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)//决定一圈比较多少个
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//若一圈中存在位置调换，则将flag置为0；
			}
		}
		if (flag == 1)//flag==1,即一圈中不存在位置调换，即此数组顺序已为升序排列，则直接跳出循环
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