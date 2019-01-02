#include <stdio.h>
#include <malloc.h>
#define MaxSize 100

int k=0;

typedef char Elem;
typedef struct Node
{
	Elem data;
	struct Node *lchild;
	struct Node *rchild;	
} BTNode,*b;

void CreateBTree(BTNode *&b,char *str)
{
	BTNode *St[MaxSize],*p;
	int top=-1,k,j=0;
	char ch;
	b=NULL;
	ch=str[j];
	while(ch!='\0')
	{
		switch(ch)
		{
			case'(':top++;St[top]=p;k=1;break;
			case')':top--;break;
			case',':k=2;break;
			default:
				p=(BTNode *)malloc(sizeof(BTNode));
				p->data=ch;p->lchild=p->rchild=NULL;
				if(b==NULL)
				   b=p;
				else
				{
					switch(k)
					{
						case 1:St[top]->lchild=p;break;
						case 2:St[top]->rchild=p;break;
					}
				}
		}
		j++;
		ch=str[j];
	}
}

void PreOrder(BTNode *b)
{
	if(b!=NULL)
	{
		k++;
		PreOrder(b->lchild);
		PreOrder(b->rchild);
	}
}

int main()
{
	int i=0; 
	char str[MaxSize];
	BTNode *b;
    printf("ÇëÊäÈë¶ş²æÊ÷£º\n");
    gets(str);
	CreateBTree(b,str);
	PreOrder(b);
	printf("%d",k);
	
	return 0;
}
