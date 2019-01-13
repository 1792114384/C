
#include<stdio.h> 
#define m 1000 
main()  
{  
	int a,b,n,j[m],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d %d\n",&a,&b);
	    j[i]=a+b;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",j[i]);
	}

    
}