#include <stdio.h>
int main()
{
	int a,b,n;
	int j=0,k=0;
	int c[100]={'0'};
	int d[100]={'0'};
	int e[100]={'0'};
	int f[100]={'0'};
	scanf("%d%d",&a,&b);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d%d%d%d",&c[i],&d[i],&e[i],&f[i]);
	for(int i=0;i<n;i++)
	{
	if(c[i]+e[i]==d[i]&&c[i]+e[i]!=f[i])
	{
		j++;
		if(j>a)
		{
			printf("A\n");
	        printf("%d",k);
		    return 0;
		}
	}
	else if(c[i]+e[i]!=d[i]&&c[i]+e[i]==f[i])
	{
		k++;
		if(k>b)
		{
			printf("B\n");
			printf("%d",j);
		    return 0;
	    }
	}
    }
	return 0;
} 
