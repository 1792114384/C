#include <stdio.h>
#pragma warning(disable:4996)
#define Maxsize 20
int main()
{
	int n;
	int a[Maxsize][Maxsize];
	while (scanf("%d",&n) != EOF) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || i == j) {
					a[i][j] = 1;
					if (j ==i) {
						printf("%d", a[i][j]);
					}
					else {
						printf("1 ");
					}
				}
				else {
					a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
					printf("%d ", a[i][j]);
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}