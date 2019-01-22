//1. 打印100~200 之间的素数
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
//2. 输出乘法口诀表
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
//3. 判断1000年-- - 2000年之间的闰年
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