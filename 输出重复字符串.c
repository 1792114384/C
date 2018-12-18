#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define Maxsize 100001
int main()
{
	char s[Maxsize];
	gets(s);
	int k = (int)strlen(s);
	int a=0,b=0,c=0,d=0,t;
	for (int i = 0; i < k; i++) {
		if (s[i] == 'G' || s[i] == 'g')
			a++;
		if (s[i] == 'p' || s[i] == 'P')
			b++;
		if (s[i] == 'l' || s[i] == 'L')
			c++;
		if (s[i] == 't' || s[i] == 'T')
			d++;
	}
	if (a > b)
		t = a;
	else
		t = b;
	if (t <c)
		t = c;
	if (t < d)
		t = d;
	while (t != 0) {
		if (a != 0) {
			printf("G");
			a--;
		}
		if (b!= 0) {
			printf("P");
			b--;
		}
		if (c != 0) {
			printf("L");
			c--;
		}
		if (d != 0) {
			printf("T");
			d--;
		}
		t--;
	}
	printf("\n");
	system("pause");
	return 0;
}