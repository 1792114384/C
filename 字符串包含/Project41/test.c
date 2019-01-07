#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int compare_string(char arr1[], char arr2[], int sz1, int sz2)
{
	int  primeNumber[26] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101 };
	long long int n = 1;
	for (int i = 0; i < sz1; i++)
	{
		int ret = arr1[i] - 'a';
		n *= primeNumber[ret];
	}
	for (int j = 0; j < sz2; j++)
	{
		int ret = arr2[j] - 'a';
		if (n % primeNumber[ret] != 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char arr1[] = "abcdmdefgfjklmns";
	char arr2[] = "cdsgsdda";
	int ret = compare_string(arr1, arr2, strlen(arr1), strlen(arr2));
	if (1 == ret)
	{
		printf("°üº¬\n");
	}
	else
	{
		printf("²»ÊÇ\n");
	}
	system("pause");
	return 0;
}

//int compare_string(char *s1, char *s2)
//{
//	assert(s1 && s2);
//	char *p = s1;
//	while (*s2)
//	{
//		p = s1;
//		while (*p)
//		{
//			if (*p == *s2)
//			{
//				break;
//			}
//			p++;
//		}
//		if (*p == 0)
//		{
//			return 0;
//		}
//		s2++;
//	}
//	return 1;
//}

//int int_cmp(const void *p1, const void *p2)
//{
//	return (*(char *)p1 - *(char *)p2);
//}
//
//int compare_string(char *s1, char *s2)
//{
//	assert(s1 && s2);
//	while (*s1)
//	{
//		if (*s1 == *s2)
//		{
//			s2++;
//			s1--;
//		}
//		s1++;
//	}
//	if (*s2 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int compare_string(char arr1[], char arr2[], int sz1, int sz2)
//{
//	int hash[26] = { 0 };
//	int num = 0;
//	for (int i = 0; i < sz1; i++)
//	{
//		int ret = arr1[i] - 'a';
//		if (hash[ret] == 0)
//		{
//			hash[ret] = 1;
//		}
//	}
//	for (int j = 0; j < sz2; j++)
//	{
//		int ret = arr2[j] - 'a';
//		if (hash[ret] != 1)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}