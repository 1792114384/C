#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

//int find_one(int *str, int sz)
//{
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= *(str + i);
//	}
//	return ret;
//}

void find_two(int *str, int sz, int *px, int *py)
{
	int ret = 0;
	int pos = 0;
	for (int i = 0; i < sz; i++)
	{
		ret ^= *(str + i);
	}
	for (int i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (((*(str + i) >> pos) & 1) == 1)
		{
			*px ^= *(str + i);
		}
		else
		{
			*py ^= *(str + i);
		}
	}
}

int lastBitOf1(int num)
{
	return num & ~(num - 1);
}

void find_three(int *str, int sz, int *px, int *py, int *pz)
{
	int ret = 0;
	int pos = 0;
	int arr1[12];
	int flag = 0;
	for (int i = 0; i < sz; i++)
	{
		ret ^= *(str + i);
		arr1[i] = *(str + i);
	}
	for (int i = 0; i < sz; i++) 
	{
		flag ^= lastBitOf1(ret ^ *(str + i));
	}
	for (int i = 0; i < sz; i++) {
		if (lastBitOf1(*(str + i) ^ ret) == flag)
			*px ^= *(str + i);
	}
	arr1[sz] = *px;
	ret ^= *px;
	for (int i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < sz + 1; i++)
	{
		if (((arr1[i] >> pos) & 1) == 1)
		{
			*py ^= arr1[i];
		}
		else
		{
			*pz ^= arr1[i];
		}
	}
}

int main()
{
	int arr[] = { 1,2,5,3,101,10,5,3,2,1,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	find_three(arr, sz, &num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
	system("pause");
	return 0;
}

//int int_cmp(const void*p1, const void*p2)
//{
//	return (*(int *)p1 > *(int *)p2);
//}
//
//void swap(char *p1, char *p2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		char tmp = *(p1 + i);
//		*(p1 + i) = *(p2+ i);
//		*(p2+ i) = tmp;
//	}
//}
//
//void bubble_sort(void *base, int count, int size, int(*cmp)(void *, void *))
//{
//	for (int i = 0; i < count - 1; i++)
//	{
//		for (int j = 0; j < count - 1 - i; j++)
//		{
//			if (cmp((char *)base + j * size, (char *)base + (j + 1) * size) > 0)
//			{
//				swap((char *)base + j * size, (char *)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}