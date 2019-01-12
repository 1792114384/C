#include <stdio.h>
int main()
{
	int n,sum=0,i,j,a=0,b;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<n-i+1;j++)
		{
			b=a+i;
			a=b+j;
		    printf("%d ",a);	
		} 
		a=0;
		printf("\n");
	}
	return 0;
}
