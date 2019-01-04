#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#define MAX 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int DataType;
typedef struct SeqList
{
	DataType *data;
	int sz;
	int capacity;
}SeqList, *pSeqList;

void InitSeqList(pSeqList ps);
void PushBack(pSeqList ps, DataType d);
void ShowSeqList(pSeqList ps);
void PopBack(pSeqList ps);
void PushFront(pSeqList ps, DataType d);
void PopFront(pSeqList ps);
int Find(pSeqList ps, DataType d);
void Insert(pSeqList ps, int pos, DataType d);
void Erase(pSeqList ps, int pos);
void Remove(pSeqList ps, DataType d);
void RemoveAll(pSeqList ps, DataType d);
int Empty(pSeqList ps);
int Size(pSeqList ps);
void BubbleSort(pSeqList ps);
int BinarySearch(pSeqList ps, DataType d);
void SelectSort(pSeqList ps);

#endif  //__SEQLIST_H__