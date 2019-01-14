#include <stdio.h>
int main()
{
	int n;
	scanf("%d ",&n);
	char s;
	scanf("%c",&s);
	for(int i=0;i<n/2;i++)
	{
	   for(int j=0;j<n;j++)
	      printf("%c",s);
	printf("\n");
}
	return 0; 
	
}
