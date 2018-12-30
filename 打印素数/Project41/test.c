#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 10000
#define MAXL 100000
#include <stdio.h>
#include <math.h>

//void prime_number(int arr[])
//{
//	int ret = 0;
//	int j = 0;
//	arr[ret] = 2;
//	for (int i = 3; i < 10000; i += 2)
//	{
//		for (j = 3; j <= sqrt(i); j += 2)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			ret++;
//			arr[ret] = i;
//		}
//	}
//}

void prime_number(int arr[])
{
	int check[MAXL] = { 0 };
	int ret = 0;
	int j = 0;
	for (int i = 2; i < 10000; i++)
	{
		if (check[i] == 0)
		{
			arr[ret] = i;
			ret++;
		}
		for (j = 0; j < ret; j++)
		{
			if (i * arr[j] > MAXL)
				break;
			check[i * arr[j]] = 1;
			if (i % arr[j] == 0)
			{
				break;
			}
		}
	}
}

int main()
{
	int n = 0;
	int m = 0;
	int count = 0;
	int arr[MAX] = { 0 };
	scanf("%d%d", &n, &m);
	prime_number(arr);
	for (int i = n - 1; i < m; i++)
	{
		count++;
		printf("%d ", arr[i]);
		if (count % 10 == 0)
		{
			printf("\n");
		}
		if (i == m - 1)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}