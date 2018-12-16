#include <stdio.h>
#include <string.h>
int main()
{
	char a[50] = {'0'};
	double n = 0;
	gets(a);
	double k = (double)strlen(a);
	if (a[0] != '-')
	{
		for (int i = 0; i < k; i++)
			if (a[i] == '2')
				n++;
		printf("%.2f", n * 100 / k);
		printf("%%");
	}
	return 0;
}