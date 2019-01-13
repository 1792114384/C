
#include <stdio.h>
#define MaxSize 100

int z = 0;
int y = 0;
void QuickSort(int R[],int s,int t)		//快速排序 
{
    int i=s,j=t,a;
    int tmp = 0;
    if(s<t)
    {
        tmp = R[s];
        while(i != j)
        {
            while(j>i && R[j]>tmp)
                j--;
            R[i] = R[j];
            while(i<j && R[i]<=tmp)
                i++;
            R[j] = R[i];
        }
        R[i] = tmp;
        z++;
        printf("第%d次交换:", z);
        for(a=0; a<y; a++)
        	printf("%d ",R[a]);
        printf("\n");
        QuickSort(R,s,i-1);
        QuickSort(R,i+1,t);
    }
}

int main()
{
    int R[MaxSize],i,length;
    printf("请输入数组长度：");
    scanf("%d", &length);
    y = length;
    printf("请输入数据元素：");
    for(i=0; i<length; i++)
        scanf("%d", &R[i]);
    QuickSort(R,0,length-1);
    printf("排序后结果为：");
    for(i=0; i<length; i++)
        printf("%d ", R[i]);
    
    return 0;
}

