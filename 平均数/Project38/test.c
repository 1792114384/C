#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int avg = (a & b) + ((a ^ b)>> 1);
	printf("%d\n", avg);
	system("pause");
	return 0;
}