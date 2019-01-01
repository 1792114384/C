#define MaxSize 100
#define NULLKEY -1
#include <stdio.h>

typedef int KeyType;
typedef struct
{
    KeyType key;
}HashData;

typedef HashData HashTable[MaxSize];

void InsertHT(HashTable ha,int k,int p);

void CreateHT(HashTable ha,int x[],int n,int m,int p)   //建立哈希表
{
    int i;
    for(i=0;i<m;i++)
        ha[i].key=NULLKEY;
    for(i=0;i<n;i++)
        InsertHT(ha,x[i],p);
}

void InsertHT(HashTable ha,int k,int p)   //处理冲突 
{
    int i;
    i=k%p;
    if(ha[i].key==NULLKEY)
    {
        ha[i].key=k;
    }
    else
    {
        do
        {
            i=(i+1)%p;
        }while(ha[i].key!=NULLKEY);
        ha[i].key=k;
    }
}

void OutPutHT(HashTable ha,int m)   //输出哈希表
{
    int i;
    for(i=0;i<m;i++)
        printf("%-5d",i);
    printf("\n");
    for(i=0;i<m;i++)
    {
        if(ha[i].key==NULLKEY)
            printf("     ");
        else
            printf("%-5d",ha[i].key);
    }
    printf("\n");
}

int SearchHT(HashTable ha,int p,int k)   //查找哈希表
{
    int i,n;
    i=k%p;
    n=i;
    while(ha[i].key!=k)
    {
        i=(i+1)%p;
        if (n==i)
            break;
    }
    if(ha[i].key==k)
        return i;
    else
        return -1;
}

int DeleteHT(HashTable ha,int p,int k)   //删除哈希表内某值
{
    int i;
    i=SearchHT(ha,p,k);
    if(i!=-1)
    {
        ha[i].key=NULLKEY;
        return 1;
    }
    else
        return 0;
}

int main()
{
    int x[]={16,74,60,43,54,90,46,31,29,88,77};
    int p=13,n=11,m=13,k=0,q,r;
    HashTable ha;
    CreateHT(ha,x,n,m,p);
    OutPutHT(ha,m);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("请输入你要查找的数据：\n");
    scanf("%d", &k);
    q=SearchHT(ha,p,k);
    if(q == -1)
        printf("\n查找失败,无此数据\n");
    else
        printf("\n%d的位置在ha[%d].\n",k,q);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    OutPutHT(ha, m);
    printf("请输入你要删除的数据：\n");
    scanf("%d", &k);
    r=DeleteHT(ha,p,k);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    if(r==1)
        OutPutHT(ha,m);
    else
    {
        printf("\n无此数据\n");
        OutPutHT(ha, m);
    }
     
    return 0;
}

