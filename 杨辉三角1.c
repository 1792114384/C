#include <stdio.h>
#pragma warning(disable:4996)
#define Maxsize 34
int main()
{
	int m = 0, n = 0;
	int a[Maxsize][Maxsize];
	while (scanf("%d %d",&m,&n) != EOF) {
		for (int i = 0; i < Maxsize; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || i == j) {
					a[i][j] = 1;
				}
				else {
					a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				}
			}
		}
		printf("%d\n", a[m-1][n-1]);
	}
	system("pause");
	return 0;
}