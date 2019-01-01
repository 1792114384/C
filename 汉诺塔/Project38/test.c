#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int i = 0; //记录移动的次数

int move(char a, char b)
{
	printf("%c ---> %c\n", a, b);
	return i++;
}

void Hanoi(int n, char a, char b, char c)
{
	if (1 == n)
	{
		move(a, c); 
	}
	else
	{
		Hanoi(n - 1, a, c, b); 
		move(a, c); 
		Hanoi(n - 1, b, a, c); 
	}
}

int main()
{
	int n = 0; 
	scanf("%d", &n);
	char a = 'a';
	char b = 'b';
	char c = 'c';
	Hanoi(n, a, b, c);
	printf("%d\n", i);
	system("pause");
	return 0;
}