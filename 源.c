#include <stdio.h>
#pragma warning(disable:4996)
#define Maxsize 1000
int main()
{
    int a=0,b=0;
	int n=1;
	int F[Maxsize];
	int s= 0;
	F[1] = 1;
	F[2] = 1;
	while(scanf("%d %d %d",&a,&b,&n)&&(a||b||n)){
		if (n <= 2) {
			printf("1\n");
			continue;
		}
		a = a % 7;
		b %= 7;
		F[3] = (a*F[2] + b * F[1]) % 7;
		F[4] = (a*F[3] + b * F[2]) % 7;
		for (int i = 5;; i++) {
			F[i] = (a*F[i - 1] + b * F[i - 2])%7;
			if (F[i] == F[4] && F[i - 1] == F[3]) {
				s = i - 4;
				break;
			}
		}
		int j = (n - 3) % s + 1;
		printf("%d\n", F[j + 2]);
	}
	system("pause");
	return 0;
}