#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

void Reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void Print(int arr[], int sz)
{
	int *p = arr;
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, sz);
	Print(arr, sz);
	system("pause");
	return 0;
}