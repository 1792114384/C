#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int max=sqrt(n);
	int len;
	int j; 
	for(len=12;len>=1;len--)
	{
		for(int i=2;i<max;i++)
		{
			long long int m=1;
			for(j=i;j-i<=len-1;j++)
			m=m*j;
			if(n%m==0)
			{    
				printf("%d\n%d",len,i);
				for(int k=i+1;k-i<=len-1;k++)
				printf("*%d",k);
				return 0;
			}
	    }
	}
	printf("1\n");
	return 0;
} 
