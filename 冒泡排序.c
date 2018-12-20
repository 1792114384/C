#include <stdio.h>  
#pragma warning(disable:4996)
#define Maxsize 100  
int main()
{
	int n = 0, count = 0, j = 0;
	int a[Maxsize] = {0};
	int b[Maxsize]= { 0 };
	printf("请输入一个十进制整数:\n");
	scanf("%d", &n);
	if (n >= 0) {
		while (n != 0) {
			a[count] = n % 2;
			n = n / 2;
			count++;
		}
		for (int i = 31; i >= 0; i--) {
			if (a[i] == 0)
				printf(" ");
			else
			printf("*");
		}
	}
	else {
		n = -n;
		while (n != 0) {
			a[count] = n % 2;
			n = n / 2;
			count++;
		}
		for (int i = count - 1; i >= 0; i--) {//将逆序输出的结果保存在另一个数组中   
			b[j] = a[i];
			j++;
		}
		for (int i = 0; i<count; i++) {   //取反码   
			if (b[i] == 0)
				b[i] = 1;
			else
				b[i] = 0;
		}
		for (int i = count - 1; i >= 0; i--) {  //将反码加1   
			if (b[i] == 0) {
				b[i] = 1;
				break;
			}
			else {
				b[i] = 0;
			}
		}
		printf("*");
		for (int i = 1; i < 32 - count; i++)
			printf(" ");
		for (int i = 0; i < count; i++) {
			if (b[i] == 0)
				printf(" ");
			else
				printf("*");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
