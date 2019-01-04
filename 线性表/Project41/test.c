#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void test()
{
	int ret = 0;
	SeqList sql;
	InitSeqList(&sql);
	PushBack(&sql, 3);
	PushBack(&sql, 1);
	PushBack(&sql, 5);
	PushBack(&sql, 2);
	PopBack(&sql);
	PushFront(&sql, 4);
	PushFront(&sql, 4);
	PushFront(&sql, 6);
	PopFront(&sql);
	ShowSeqList(&sql);
	ret = Find(&sql, 3);
	if (ret == -1)
	{
		printf("要查找的元素不存在\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}
	Insert(&sql, ret, 5);
	ShowSeqList(&sql);
	Erase(&sql, ret);
	ShowSeqList(&sql);
	ret = Find(&sql, 5);
	if (ret == -1)
	{
		printf("要删除的元素不存在\n");
	}
	else
	{
		//Remove(&sql, 5);
		RemoveAll(&sql, 4);
	}
	ShowSeqList(&sql);
	PushBack(&sql, 6);
	PushBack(&sql, 4);
	PushBack(&sql, 3);
	//Empty(&sql);
	//Size(&sql);
	/*BubbleSort(&sql);
	ShowSeqList(&sql);
	ret = BinarySearch(&sql, 4);
	if (ret == -1)
	{
		printf("要查找的元素不存在\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}*/
	SelectSort(&sql);
	ShowSeqList(&sql);
}


int main()
{
	test();
	system("pause");
	return 0;
}