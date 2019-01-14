#include <stdio.h>
int main()
{
	int a[100]={'0'};
	int b[100]={'0'};
	char c='/';
	int n; 
	int r;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d%s%d",&a[i],&c,&b[i]);
	for(int i=0;i<n;i++)
	{
	   int k=b[i]*b[i+1];
       do
       {r=b[i]%b[i+1];
       b[i]=b[i+1];
       b[i+1]=r;
       }while(r);
       printf("%d",k/b[i]);
       if(i+1==n)
       break;
    }
    printf("%d",r);
}
