#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

//ģ��ʵ��atoi
//

enum State
{
	VALID,
	INVALID
};

enum State state = INVALID;//�жϷ���ֵ�ĺϷ��Ե�״̬

int my_atoi(const char* str)
{
	int flag = 1;
	long long ret = 0;
	//1. strΪ��ָ��
	assert(str != NULL);
	//2. ���ַ���
	if (*str == '\0')
	{
		return 0;
	}
	//3. �հ��ַ�
	while (isspace(*str))
	{
		str++;
	}
	//4. ����������
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
			//6. �����������
			if (ret >INT_MAX || ret<INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			//5. �ַ����еķ������ַ�
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







