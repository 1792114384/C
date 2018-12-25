#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InitArr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		arr[i] = i;
}

void PrintArr(int arr[], int sz)
{
	int *p = arr;
	for (int i = 0; i < sz; i++)
		printf("%d ", *(p+i));
}


void EmptyArr(int arr[], int sz)
{
	memset(arr, -1, 40);
}

void ReverseArr(int arr[], int sz)
{
	for (int i = 0; i < sz / 2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	InitArr(arr, sz);
	PrintArr(arr, sz);
	printf("\n");
	ReverseArr(arr, sz);
	PrintArr(arr, sz);
	printf("\n");
	system("pause");
	return 0;
}