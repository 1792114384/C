#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)
#define Maxsize 100
typedef int ElementType;
typedef struct {
	ElementType data[Maxsize];
	int last;
}list;

list *p;

list *makeEmpty()
{
	list *p;
	p = (list *)malloc(sizeof(list));
	p->last = -1;
	return p;
}

int find(ElementType x, list *p)
{
	int i = 0;
	while (i <= p->last&&x != p->data[i])
		i++;
	if (i > p->last)
		return -1;
	else return i;
}

void insert(ElementType x, int i, list *p)
{
	if (p->last == Maxsize - 1)
		printf("表已满");
	if (i <= 0 || i > p->last+2)
		printf("不合法");
	else {
		for (int j = p->last; j >= i; j--) 
			p->data[j + 1] = p->data[j];
		p->data[i - 1] = x;
		p->last++;
	}
	return;
}

void delete(int i, list *p)
{
	if (i<0 || i>p->last + 1) {
		printf("不存在");
		return;
	}
	for (int j = i; j < p->last; j++)
		p->data[j - 1] = p->data[j];
	p->last--;
}

int main()
{
	list *q = makeEmpty();
	insert(5, 0, q);
	insert(4, 1, q);
	insert(3, 2, q);
	printf("%d\n", find(3, q));
	delete(3, q);
	printf("%d\n", find(3, q));
	system("pause");
	return 0;
}