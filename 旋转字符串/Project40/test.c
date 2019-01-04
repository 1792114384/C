#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void swap(char *p1, char *p2)
{
	char tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void reserve(char *p1, char *p2)
{
	while (p1 < p2)
	{
		swap(p1, p2);
		p1++;
		p2--;
	}
}

char *left_rotate(char *p1, int m)
{
	assert(p1);
	char *ret = p1;
	int len = strlen(p1);
	reserve(p1, p1 + m - 1);
	reserve(p1 + m, p1 + len - 1);
	reserve(p1, p1 + len - 1);
	return ret;
}

//char *left_rotate(char *p1, int m)
//{
//	char *ret = p1;
//	assert(p1);
//	char *p2 = p1 + m;
//	int n = strlen(p1);
//	int k = (n - m) % m - 1;
//	while (k--)
//	{
//		m = 3;
//		while (m--)
//		{
//			swap(p1, p2);
//			p1++;
//			p2++;
//		}
//	}
//	while (*p2)
//	{
//		m = 3;
//		char *p3 = p2;
//		char *p4 = p1;
//		while (m--)
//		{
//			swap(p3, p3 - 1);
//			p3--;
//		}
//		p2++;
//	}
//
//	return ret;
//}

int main()
{
	char arr[] = "abcdefghijk";
	char *ret = left_rotate(arr, 3);
	printf("%s\n", ret);
	system("pause");
	return 0;
}











