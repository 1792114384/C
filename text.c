#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
			printf("%c", ch - ('a' - 'A'));
		if (ch >= 'A'&&ch <= 'Z')
			printf("%c", ch + ('a' - 'A'));
	}
	system("pause");
	return 0;
}