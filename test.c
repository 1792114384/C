#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

//模拟实现atoi
//

enum State
{
	VALID,
	INVALID
};

enum State state = INVALID;//判断返回值的合法性的状态

int my_atoi(const char* str)
{
	int flag = 1;
	long long ret = 0;
	//1. str为空指针
	assert(str != NULL);
	//2. 空字符串
	if (*str == '\0')
	{
		return 0;
	}
	//3. 空白字符
	while (isspace(*str))
	{
		str++;
	}
	//4. 正负数问题
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0')*flag;
			//6. 正负溢出问题
			if (ret >INT_MAX || ret<INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			//5. 字符串中的非数字字符
			state = VALID;
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}
int main()
{
	char *p = "	  -000000";
	int ret = my_atoi(p);
	if (state == VALID)
		printf("%d\n", ret);
	system("pause");
	return 0;
}







