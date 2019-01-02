#include<stdio.h>
#include<malloc.h>
#define Maxsize 100
typedef int Elemtype;
typedef struct list
{
	Elemtype data[Maxsize];
	int length;
}
alist;

void CreateList(alist *&l,Elemtype a[],int n)
{
	int i;
	l=(alist *)malloc(sizeof(alist));
	for(i=0;i<n;i++)
	  l->data[i]=a[i];
    l->length=n;
}

void DispList(alist *l)
{
	int i;
	for(i=0;i<l->length;i++)
	  printf("%d ",l->data[i]);
	printf("\n");
}

void move(alist *&l)
{
	int x=0,y=l->length-1;
	Elemtype t;
	while(x<y)
	{
		while((x<y)&&(l->data[y]%2==0))
		y--;
		while((x<y)&&(l->data[x]%2==1))
		x++;
		if(x<y)
		{
			t=l->data[x];
			l->data[x]=l->data[y];
			l->data[y]=t;
		}
	}
}

int main()
{
	int n,length;
	alist *l;
	Elemtype a[Maxsize];
	printf("长度为：\n");
	scanf("%d",&length);
	printf("输入元素:\n");
	for(n=0;n<length;n++)
	  scanf("%d",&a[n]);
    CreateList(l,a,length);
    move(l);
    DispList(l);
    return 0;
}
