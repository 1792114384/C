#include <stdio.h>
#pragma warning(disable:4996) 
int main()
{
	int n;
	printf("请输入一个十进制数：\n");
	scanf("%d", &n);
	unsigned int i = 1u << 31;
	for (; i; i >>= 1) {
		if (n%i == 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	system("pause");
	return 0;
}