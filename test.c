#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//#define X 3
//#define Y X*2
//#undef X
//
//#define X 2
//
//int main()
//{
//	int z = Y;
//	printf("%d\n", z);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 5 / (-3));
//	printf("%d\n", (5) % (-6));
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0,printf("First = %d\n",i);
//	     i < 10,printf("Second = %d\n",i);
//	     i++,printf("Third = %d\n",i))
//	{
//		printf("Fourth = %d\n", i);
//		count++;
//		if (count > 100)
//		{
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//union Un
//{
//	char c[5];
//	int i;
//};

//union Un
//{
//	char c;
//	int i;
//};

//enum Sex
//{
//	MALE,
//	FAMALE,
//	SECRET,
//};

//#pragma pack(2)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认

//struct S2
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S3
//{
//	char c1;
//	struct S2 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//	system("pause");
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};

//int CheckSystem()
//{
//	union check
//	{
//		int i;
//		char ch;
//	}c;
//	c.i = 1;
//	return (c.ch == 1);
//}
//
//int main()
//{
//	int ret = 0;
//	ret = CheckSystem();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	/*int i = -20;
//	unsigned j = 10;
//	printf("%d\n", i + j);*/
//	unsigned i; 
//	int count = 0;
//	for (i = 9; i >= 0; i--) 
//	{ 
//		printf("%x\n", i);
//		count++;
//		if (count > 20)
//			break;
//	}
//	system("pause");
//	return 0;
//}

//void fun(int b[100])
//{
//	printf("%d\n", sizeof(b)); 
//}
//
//int main()
//{
//	int b[100];
//	fun(b);
//	int*p = NULL;
//	printf("%d\n", sizeof(p));       //4
//	printf("%d\n", sizeof(*p));       //4
//
//	int a[100];
//	printf("%d\n", sizeof(a));       //
//	printf("%d\n", sizeof(a[100]));  //4
//	printf("%d\n", sizeof(&a));      //4
//	printf("%d\n", sizeof(&a[0]));   //4
//	system("pause");
//	return 0;
//
//}



//static int j;
//
//void fun1(void)
//{
//	static int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//void fun2(void)
//{
//	j = 0;
//	j++;
//}
//int main()
//{
//	for (int k = 0; k<10; k++)
//	{
//		fun1();
//		fun2();
//	}
//	printf("%d\n", j);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	char *pc = (char *)&n;
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	system("pause");
//	return 0;
//}