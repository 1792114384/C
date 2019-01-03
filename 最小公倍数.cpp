#include <stdio.h>
#include <string.h>
int f(int a,int b)
{
	int t;
	if(a>b)
	{
		t=a;a=b;b=t;
	}	
	for(t=a;t%a||t%b;t+=a){};
	return t;
}
int main()
{
	int a[20];
	int i,k;
	int n;
	printf("输入个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("输入第%d个数:",i+1);
		scanf("%d",&a[i]);
	}
	k=1;
	for(i=0;i<n;i++)
	{
		k=f(k,a[i]);
	}
	printf("\n最小公倍数为:%d\n",k);
	return 0;
}
