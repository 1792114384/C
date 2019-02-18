//1.完成猜数字游戏。

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("********************************\n");
	printf("****         1.play         ****\n");
	printf("****         0.exit         ****\n");
	printf("********************************\n");
}

void game()
{
	int ret = 0;
	int input = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入猜的数字:");
		scanf("%d", &input);
		if (input < ret)
			printf("猜小了\n");
		else if (input > ret)
			printf("猜大了\n");
		else
		{
			printf("猜对了！！！\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int n = 0;
	do
	{
		menu();
		
		printf("请选择");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default :
			printf("选择错误，请重新输入:\n");
		}
	} while (n);
	system("pause");
	return 0;
}

//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int bin_search(int arr[],int left,int right,int n)
{
	int mid = 0;
	while (left<=right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	scanf("%d", &n);
	int k= bin_search(arr,left,sz,n);
	if (-1 == k)
		printf("-1");
	else
		printf("%d\n", k);
	system("pause");
	return 0;
}
//3.编写代码模拟三次密码输入的场景。

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	char arr1[] = { 0 };
	char arr2[] = { 0 };
	printf("请设置密码:");
	gets(arr1);
	printf("请输入密码:");
	while (1)
	{
		gets(arr2);
		if (strcmp(arr1, arr2) == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("请重新输入密码，你还有%d次机会:", 2 - i);
			i++;
		}
		if (3 == i)
			break;
	}
	system("pause");
	return 0;
}


//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Maxsize 1000
int main()
{
	int m = 0;
	char arr[] = { 0 };
	char str[Maxsize] = { 0 };
	gets(arr);
	int k = (int)strlen(arr);
	for (int i = 0; i < k; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			str[i-m] = arr[i] - 32;
		if (arr[i] >= 'A' && arr[i] <= 'Z')
			str[i-m] = arr[i] + 32;
		if(arr[i] >= '0'&& arr[i] <= '9')
		{
			m++;
			continue;
		}
	}
	puts(str);
	system("pause");
	return 0;
}