#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	scanf("%d", &n);
	if (n <= 5)
		printf("%d\n", n + 2);
	if (n == 6)
		printf("1\n");
	if (n ==7)
		printf("2\n");
	system("pause");
	return 0;
}