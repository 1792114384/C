#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100
int main()
{
	int T = 0, n = 0, m = 0;
	int arr[Maxsize] = { 0 };
	int arr2[Maxsize] = { 0 };
	int l[Maxsize] = { 0 }, r[Maxsize] = { 0 }, d[Maxsize] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int b = 0;
		scanf("%d%d", &n, &m);
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[j]);
		for (int k = 0; k < m; k++)
			scanf("%d%d%d", &l[k], &r[k], &d[k]);
		for (int k = 0; k < m; k++)
		{
			int t = 1;
			for (int a = l[k]-1; a <= r[k]-1; a++)
				t = t * arr[a];
			if (t%d[k] == 0)
				arr2[k] = 1;
			else
				arr2[k] = 0;
			b++;
		}
		for (int c = 0; c < b; c++)
		{
			if (1 == arr2[c])
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	system("pause");
	return 0;
}