#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n = %d\n", n);
	printf("*pFloat = %f\n", *pFloat);

	*pFloat = 9.0;
	printf("n = %d\n", n);
	printf("*pFloat = %f\n", *pFloat);
	system("pause");
	return 0;
}