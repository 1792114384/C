//strncpy
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//
//char *my_strncpy(char *dest, const char *str, int count)
//{
//	char *ret = dest;
//	assert(dest && str);
//	while (count-- && *str)
//	{
//		*dest++ = *str++;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[] = "hello world";
//	printf("%s\n", my_strncpy(arr1, arr2, strlen(arr2)));
//	system("pause");
//	return 0;
//}

//strncat

//char *my_strncat(char *dest, const char *str, int count)
//{
//	char *ret = dest;
//	assert(dest && str);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count-- && *str)
//	{
//		*dest++ = *str++;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[100] = "abcdef";
//	char arr2[] = "ghijk";
//	printf("%s\n", my_strncat(arr1, arr2, strlen(arr2)));
//	system("pause");
//	return 0;
//}
//strncmp

//int my_strncmp(const char *dest, const char *str, int count)
//{
//	assert(dest && str);
//	while (count--)
//	{
//		if (*dest == *str)
//		{
//			dest++;
//			str++;
//		}
//		else
//		{
//			if (*dest > *str)
//			{
//				return 1;
//			}
//			else
//			{
//				return -1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//
//{
//	char arr1[] = "hello";
//	char arr2[] = "hello";
//	printf("%d\n", my_strncmp(arr1, arr2, strlen(arr1)));
//	system("pause");
//	return 0;
//}

//strrchr

char *my_strrchr(char *str, char c)
{
	char *ret = NULL;
	assert(str);
	int count = strlen(str);
	while (count--)
	{
		if (*(str + count) == c)
		{
			ret = str + count;
			return ret;
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abbcdefbbdeefg";
	char c = 'b';
	printf("%s\n", my_strrchr(arr1, c));
	system("pause");
	return 0;
}