//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	while (i<32)
	{
		if((value & 1) == 1)
			count++;
		i++;
		value=value >> 1;
	}
	printf("%d\n", count);
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	count_one_bits(n);
	system("pause");
	return 0;
}

//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int arr[32] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		arr[i] = n & 1;
		n = n >> 1;
	}
	for (int i = 31; i >= 0; i -= 2)
		printf("%d", arr[i]);
	printf("\n");
	for (int i = 30; i >= 0; i -= 2)
		printf("%d", arr[i]);
	printf("\n");
	system("pause");
	return 0;
}
//3. ���һ��������ÿһλ��
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//
int main()
{
	int n = 0;
	int tmp = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		tmp = n % 10;
		n = n / 10;
		printf("%d ", tmp);
	}
	system("pause");
	return 0;
}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m = 0, n = 0;
	int count = 0;
	int tmp = 0;
	scanf("%d%d", &m, &n);
	tmp = m ^ n;
	for (int i = 0; i < 32; i++)
	{
		if ((tmp & 1) == 1)
			count++;
		tmp = tmp >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}



