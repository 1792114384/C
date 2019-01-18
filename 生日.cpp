#include <stdio.h>
int main()
{
	int i=0,j=0;
	for(i=0;i<236;i++)
	{
		for(j=i;j<236;j++)
		{
			int sum=0;
			for(int k=i;k<j;k++)
			sum=sum+k;
			if(sum==236)
			printf("%d %d",i,j);
		}
	}
	return 0;
 } 
