//1.��ɲ�������Ϸ��

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
		printf("������µ�����:");
		scanf("%d", &input);
		if (input < ret)
			printf("��С��\n");
		else if (input > ret)
			printf("�´���\n");
		else
		{
			printf("�¶��ˣ�����\n");
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
		
		printf("��ѡ��");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default :
			printf("ѡ���������������:\n");
		}
	} while (n);
	system("pause");
	return 0;
}

//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//3.��д����ģ��������������ĳ�����

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0;
	char arr1[] = { 0 };
	char arr2[] = { 0 };
	printf("����������:");
	gets(arr1);
	printf("����������:");
	while (1)
	{
		gets(arr2);
		if (strcmp(arr1, arr2) == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������������룬�㻹��%d�λ���:", 2 - i);
			i++;
		}
		if (3 == i)
			break;
	}
	system("pause");
	return 0;
}


//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ����
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