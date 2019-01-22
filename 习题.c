//1. 给定两个整形变量的值，将两个值的内容进行交换。
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int t = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
//2. 不允许创建临时变量，交换两个数的内容（附加题）
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
3.求10 个整数中最大值。
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	int max = 0;
	max = a[0];
	for (int i = 0; i < 10; i++)
		if (max < a[i])
			max = a[i];
	printf("%d\n", max);
	system("pause");
	return 0;
}
//4.将三个数按从大到小输出。
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int max = 0, t = 0, k =0;
	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 3; i++)
	{
		max = arr[i];
		k = i;
		for (int j = i; j < 3; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				k = j;
			}
		}
		t = arr[k];
		arr[k] = arr[i];
		arr[i] = t;
	}
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	system("pause");
	return 0;
}
//5.求两个数的最大公约数。
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0, b = 0, t = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	for (int i = a; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}
