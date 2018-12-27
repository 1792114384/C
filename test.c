//strlen
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int my_strlen(const char *str)
{
	int count = 0;
	assert(str);
	while (*str++)
	{
		count++;
	}
	return count;
}

int my_strlen(const char *str)
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(++str);
}

int my_strlen(char *str)
{
	char *ret = str;
	assert(str);
	while (*ret != '\0')
	{
		ret++;
	}
	return ret - str;
}

int main()
{
	char arr[100] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//strcpy
//
char* my_strcpy(char *dest, const char *str)
{
	char *ret = dest;
	assert(dest && str);
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[100] = { 0 };
	char arr2[] = "abcdef";
	char *ret = my_strcpy(arr1, arr2);
	printf("%s\n", ret);
	system("pause");
	return 0;
}
//strcat

char* my_strcpy(char *dest, char *str)
{
	char *ret = dest;
	assert(dest && str);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[100] = "abcdef";
	char arr2[100] = "ghijk";
	char *ret = my_strcpy(arr1, arr2);
	printf("%s\n", ret);
	system("pause");
	return 0;
}
//strstr

char* my_strstr(char *str1, char *str2)
{
	assert(str1 && str2);
	char *start = str1;
	char *cur = str2;
	char *s1 = NULL;
	if (*str2 == '\0')
	{
		return NULL;
	}
	else
	{
		while (*start)
		{
			s1 = start;
			cur = str2;
			while (*s1 && *cur && (*s1 == *cur))
			{
				s1++;
				cur++;
			}
			if (*cur == '\0')
			{
				return start;
			}
			start++;
		}
	}
}

int main()
{
	char arr1[] = "abbcdefg";
	char arr2[] = "bcd";
	char *ret = my_strstr(arr1, arr2);
	if (*ret)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}
//strcmp

int my_atrcmp(const char str1[], const char str2[])
{
	assert(str1 && str2);
	int ret = 0;
	while ( !(ret = *(unsigned char *)str1 - *(unsigned char *)str2) && *str1 )
	{
		str1++;
		str2++;
	}
	if (ret < 0)
		return -1;
	else if (ret > 0)
		return 1;
	else
		return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	int ret = my_atrcmp(arr1, arr2);
	if (0 == ret)
	{
		printf("相等\n");
	}
	else if (-1 == ret)
	{
		printf("第一个小\n");
	}
	else
	{
		printf("第一个大\n");
	}
	system("pause");
	return 0;
}