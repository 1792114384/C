//1. ��ӡ100~200 ֮�������
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	for (int i = 100; i <= 200; i++)
	{
		int j = 2;
		while (i%j != 0 && j <= i / j)
		{
			j++;
			if (j > i / j) {
				printf("%d\n", i);
			}
		}
	}
	system("pause");
	return 0;
}
//2. ����˷��ھ���
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	for (int i = 1; i <= 9; i++) 
	{
		for (int j = 1; j <= i; j++)
			printf("%d*%d=%d ", i, j, i*j);
		printf("\n");
	}
	system("pause");
	return 0;
}
//3. �ж�1000��-- - 2000��֮�������
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	for (int i = 1000; i <= 2000; i++)
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			printf("%d\n", i);
	system("pause");
	return 0;
}