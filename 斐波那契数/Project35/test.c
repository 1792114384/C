#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

//int fibonacci(int n)
//{
//	int arr[100] = { 0 };
//	arr[0] = 1;
//	arr[1] = 1;
//	for (int i = 2; i < n; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	return arr[n - 1];
//}

//
//int fibonacci(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n <= 2)
//	{
//		return c;
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fibonacci(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}