#include <stdio.h>
#pragma warning(disable:4996)
#define Maxsize 100000
int main()
{
	int k=0,sum=0;
	int Max=0;
	int a[Maxsize] = { 0 };
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < k; i++) {
		sum = sum + a[i];
		if (Max < sum)
			Max = sum;
		else if(sum < 0)
			sum = 0;
	}
	printf("%d\n", Max);
	system("pause");
	return 0;
}