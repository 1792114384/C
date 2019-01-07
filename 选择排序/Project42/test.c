#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void Swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void select_sort(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int minPos = left;
		int maxPos = left;
		for (int i = left; i < len - left; i++)
		{
			if (arr[i] < arr[minPos])
			{
				minPos = i;
			}
			if (arr[i] > arr[maxPos])
			{
				maxPos = i;
			}
		}
		if (maxPos == left)
		{
			maxPos = minPos;
		}
		if (minPos != left)
		{
			Swap(arr + minPos, arr + left);
		}
		if (maxPos != (len - left - 1))
		{
			Swap(arr + maxPos, arr + (len - left - 1));
		}
		left++;
		right--;
	}
}

//void select_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int minPos = 0;
//		int maxPos = 0;
//		for (int j = 1; j < len - i; j++)
//		{
//			if (arr[j] > arr[maxPos])
//			{
//				maxPos = j;
//			}
//		}
//		if (maxPos != len - 1 - i)
//		{
//			Swap(arr + maxPos, arr + (len - 1 - i));
//		}
//	}
//}

int main()
{
	int arr[] = { 9,5,3,4,6,2,8,1,7,0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	select_sort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}