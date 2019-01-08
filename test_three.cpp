#define MaxSize 100
#define NULLKEY -1 
#include <stdio.h>

typedef int KeyType;
typedef struct
{
	KeyType key;
}HashData;
typedef HashData HashTable[MaxSize];

void InsertHT(HashTable ha,int k,int p)
{
	int i,adr;
	adr=k%p;
	if(ha[adr].key==NULLKEY)
	{
		ha[adr].key=k;
	}
	else
	{
		do
		{
			adr=(adr+1)%p;
		}while(ha[adr].key!=NULLKEY);
		ha[adr].key=k;
	}
}

void CreateHT(HashTable ha,int x[],int n,int m,int p)
{
	int i;
	for(i=0;i<m;i++)
		ha[i].key=NULLKEY;
	for(i=0;i<n;i++)
	    InsertHT(ha,x[i],p);
}

void DispHT(HashTable ha,int m)
{
	int i;
	for(i=0;i<m;i++)
	   printf("%4d",i);
	printf("\n");
	for(i=0;i<m;i++)
	    {
		if(ha[i].key==NULLKEY)
	        printf("    ");
	    else
	        printf("%4d",ha[i].key);
	    }
	printf("\n");
}
int SearchHT(HashTable ha,int p,int k)
{
	int adr;
	adr=k%p;
	while(ha[adr].key!=k)
	{
		adr=(adr+1)%p;
	}
	if(ha[adr].key==k)
	   return adr;
	else 
	   return -1;
}
int DeleteHT(HashTable ha,int p,int k)
{
	int adr;
	adr=SearchHT(ha,p,k);
	if(ha[adr].key!=-1)
	{
		ha[adr].key=NULLKEY;
		return 1;
	}
	else
    	return 0;
}
int main()
{
	int x[]={16,74,60,43,54,90,46,31,29,88,77};
	int p=13,n=11,m=13,k=16,q;
	HashTable ha;
	CreateHT(ha,x,n,m,p);
	DispHT(ha,m);
	InsertHT(ha,k,p);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	k=29;
	q=SearchHT(ha,p,k); 
	if(q==-1)
	   printf("查找失败");
	else
	   printf("ha[%d].key=%d\n",q,k);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("请输入你要删除的数据：\n");
	scanf("%d", &k);
	DeleteHT(ha,p,k);
	DispHT(ha,m);
	
	return 0;
}
