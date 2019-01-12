#include <stdio.h>
#include <cstdio> 
#include <algorithm>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	do
	{
		int b=a[0]*1000+a[1]*100+a[2]*10+a[3];
		int c=a[4]*1000+a[5]*100+a[6]*10+a[1];
		int d=a[4]*10000+a[5]*1000+a[2]*100+a[1]*10+a[7];
		if(b+c==d)
		printf("%d %d\n",b,c);
	}while(next_permutation(a,a+10));
	return 0;
 } 
