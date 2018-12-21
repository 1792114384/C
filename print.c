#include <stdio.h>
#pragma warning(disable:4996)
void Print(int n)
{
	unsigned int i = 1u << 7;
	for (; i; i >>= 1) {
		printf("%s", n&i ? "1" : " ");
	}
	//    printf("\n");
}

int main()
{
	int n = 0;
	int count = 0;
	while (n != 500) {
		count++;
		//        printf("请输入一个十进制数：\n");
		scanf("%d", &n);
		Print(n);
		if (!(count % 2)) {
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
