#include <stdio.h>
#pragma warning(disable:4996)
void printn(int n)
{
	if (n != 0) {
		printn(n-1);
		printf("%d\n", n);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printn(n);
	system("pause");
	return 0;
}