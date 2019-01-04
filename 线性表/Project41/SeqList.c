#include "SeqList.h"

void InitSeqList(pSeqList ps)
{
	ps->sz = 0;
	ps->capacity = 3;
	DataType* tmp = (DataType *)calloc(3, sizeof(DataType));
	ps->data = tmp;
}

void PushBack(pSeqList ps, DataType d)
{
	DataType* tmp = NULL;
	assert(ps);
	if (ps->sz == ps->capacity)
	{
		tmp = (DataType *)realloc(ps->data, (ps->capacity + 2) * sizeof(DataType));
		if (tmp == NULL)
		{
			perror("realloc");
			system("pause");
			return;
		}
		ps->data = tmp;
		ps->capacity += 2;
	}
	ps->data[ps->sz] = d;
	ps->sz++;
}

void ShowSeqList(pSeqList ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}

void PopBack(pSeqList ps)
{
	assert(ps);
	if (ps->sz == 0)
	{
		printf("线性表为空\n");
		return;
	}
	ps->sz--;
}
void PushFront(pSeqList ps, DataType d)
{
	assert(ps);
	if (ps->sz == MAX)
	{
		printf("线性表已满\n");
		return;
	}
	for (int i = ps->sz - 1; i >= 0; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}
	ps->data[0] = d;
	ps->sz++;
}

void PopFront(pSeqList ps)
{
	assert(ps);
	if (ps->sz == 0)
	{
		printf("线性表为空\n");
		return;
	}
	for (int i = 0; i < ps->sz - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->sz--;
}

int Find(pSeqList ps, DataType d)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		if (ps->data[i] == d)
		{
			return i;
		}
	}
	return -1;
}

void Insert(pSeqList ps, int pos, DataType d)
{
	assert(ps);
	if (ps->sz == MAX)
	{
		printf("顺序表已满\n");
		return;
	}
	for (int i = ps->sz - 1; i >= pos; i--)
	{
		ps->data[i + 1] = ps->data[i];
	}
	ps->data[pos] = d;
	ps->sz++;
}

void Erase(pSeqList ps, int pos)
{
	assert(ps);
	for (int i = pos; i < ps->sz - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->sz--;
}

void Remove(pSeqList ps, DataType d)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		if (ps->data[i] == d)
		{
			for (int j = i; j < ps->sz - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			break;
		}
	}
	ps->sz--;
}

void RemoveAll(pSeqList ps, DataType d)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		if (ps->data[i] == d)
		{
			for (int j = i; j < ps->sz - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->sz--;
			i--;
		}
	}
}

int Empty(pSeqList ps)
{
	assert(ps);
	return ps->sz;
}

int Size(pSeqList ps)
{
	assert(ps);
	return ps->sz;
}

void BubbleSort(pSeqList ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz - 1; i++)
	{
		int flag = 0;
		for (int j = i; j < ps->sz - 1 - i; j++)
		{
			if (ps->data[j] > ps->data[j + 1])
			{
				DataType tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int BinarySearch(pSeqList ps, DataType d)
{
	assert(ps);
	int left = 0;
	int right = ps->sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + ((right - left) >> 1);
		if (ps->data[mid] > d)
		{
			right = mid - 1;
		}
		else if (ps->data[mid] < d)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

void SelectSort(pSeqList ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz - 1; i++)
	{
		int maxPos = 0;
		for (int j = 1; j < ps->sz - i; j++)
		{
			if (ps->data[j] > ps->data[maxPos])
			{
				maxPos = j;
			}
		}
		if (maxPos != ps->sz - 1 - i)
		{
			DataType tmp = ps->data[maxPos];
			ps->data[maxPos] = ps->data[ps->sz - 1 - i];
			ps->data[ps->sz - 1 - i] = tmp;
		}
	}
}




