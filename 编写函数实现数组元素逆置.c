void arr_print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n ", arr[i]);
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("原数组：");
	arr_print(arr, sz);
	reverse(arr, sz);
	printf("逆置数组：");
	arr_print(arr, sz);
	return 0;
}