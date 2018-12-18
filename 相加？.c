#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a <1 && a>1000) {
		if (b >= 1 && b <= 1000)
			printf("?+%d=?\n", b);
		else
			printf("?+?=?\n");
	}
	else {
		if (b >= 1 && b <= 1000)
			printf("%d+%d=%d\n",a, b,a+b);
		else
			printf("%d+?=?\n",a);
	}
	system("pause");
	return 0;
}