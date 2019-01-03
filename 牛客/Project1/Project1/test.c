#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#define MAX 51

typedef struct Node
{
	char data;
	Node *next;
}Node;

typedef struct Arr
{
	int arr[MAX];
	int top;
}Arr;

void ArrInit(Arr *pa)
{
	assert(pa);
	pa->top = 0;
}

int main()
{
	Arr arr;
	ArrInit(&arr);

}