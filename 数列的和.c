#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Maxsize 1000
int main()
{
	float arr1[Maxsize] = {0.0};
	int arr2[Maxsize] = { 0 };
	int i = 0;
	while (scanf("%f%d", &arr1[i], &arr2[i])!=EOF && arr2[i]!=0) {
		float sum = 0.0;
		sum = sum + arr1[i];
		float a = arr1[i];
		for (int j = 1; j < arr2[i]; j++) 
		{
			a = sqrt(a);
			sum = sum + a;
		}
		i++;
		printf("%.2f\n", sum);
	}
	system("pause");
	return 0;
}