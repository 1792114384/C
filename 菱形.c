//1������
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);//n��ʾ��
	for (int i = 1; i <= n/2+1; i++)
	{
		for (int j = n/2; j >= i; j--)
			printf(" ");
		for (int k = 1; k <= 2*i-1; k++)
			printf("*");
		printf("\n");
	}
	for (int i = n/2; i >=1; i--)
	{
		for (int j = n/2; j >= i; j--)
			printf(" ");
		for (int k = 2 * i - 1; k >= 1; k--)
			printf("*");
		printf("\n");			
	}
	system("pause");
	return 0;
}
////2��ˮ�ɻ���
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	for (int i = 100; i < 1000; i++)
//	{
//		int a = i % 10;
//		int b = (i%100-a)/10;
//		int c = i / 100;
//		if (a*a*a + b * b*b + c * c*c == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
////3����Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮��
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int b = n + n * 10;
//	int c = b + b * 10;
//	int d = c * 10;
//	int e = d * 10;
//	int sum = n + b + c + d + e;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
////4.��дһ���������ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ���
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	const char * a = arr;
//	for (int j = 0; j < i; j++)
//	{
//		if (strcmp(a, "{") == 0)
//			count++;
//		if (strcmp(a, "}") == 0)
//			count--;
//	}
//	if (0 == count)
//		printf("�ɶ�");
//	else
//		printf("���ɶ�");
//
//	system("pause");
//	return 0;
//}