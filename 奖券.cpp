#include <stdio.h>
#include <string.h>
int main()
{
	int j=0;
	int a,b,c,d,e,n=0;
	for(int i=10000;i<=99999;i++)
	{
	     a=i%10;
	     b=(i-a)%100/10;
	     c=(i-a-b*10)%1000/100;
	     d=(i-a-b*10-c*100)%10000/1000;
	     e=(i-a-b*10-c*100-d*1000)/10000;
	     if(a!=4&&b!=4&&c!=4&&d!=4&&e!=4)
	     {
	     	//printf("%d\n",i);
			n++; 
		 } 
	}
	printf("%d",n);
	return 0;
}
