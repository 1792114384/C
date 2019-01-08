#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0;
	scanf("%d%d:%d%d",&a,&b,&c,&d);
	if(a==0||(a==1&&b<=2))
	{
	    printf("Only ");
	    printf("%d%d:%d%d",a,b,c,d);
	    printf(" Too early to Dang.");
    }
    else
    {
    	if(a==1&&b>=3&&c==0&&d==0)
    	{for(int i=0;i<b-2;i++)
    	printf("Dang");
        }
        else if(a==1&&b>=3)
        {
        	for(int i=0;i<b-1;i++)
    	    printf("Dang");
		}
		else if(a==2&&c==0&&d==0)
		{
			for(int i=0;i<b+8;i++)
    	    printf("Dang");
		}
		else
		{
			for(int i=0;i<b+9;i++)
    	    printf("Dang");
		}
	}
	return 0;
 } 
