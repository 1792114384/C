#define _CRT_SECURE_NO_WARNINGS 1




//int jump_floor(int n)
//{
//	int sum = 0;
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 1; i <= MAX; i++)
//		{
//			sum += jump_floor(n - i);
//		}
//		return sum;
//	}
//}
//
//int jump_floor(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	else if (2 == n)
//	{
//		return 2;
//	}
//	else
//	{
//		return jump_floor(n - 1) + jump_floor(n - 2);
//	}
//}
#include <stdio.h>
#include <stdlib.h>
//
//int jump_floor(int n)
//{
//	int sum = 0;
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			sum += jump_floor(n - i);
//		}
//		return sum;
//	}
//}
//
//int jump_floor(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 2 * jump_floor(n - 1);
//	}
//}

#include <math.h>

int jump_floor(int n)
{
	return (int)pow(2, n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = jump_floor(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}