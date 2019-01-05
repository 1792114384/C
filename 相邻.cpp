#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
bool judge(int a[])
{
	if(abs(a[0]-a[1])!=1&&abs(a[0]-a[4])!=1&&abs(a[0]-a[5])!=1&&abs(a[0]-a[3])!=1)
    if(abs(a[1]-a[2])!=1&&abs(a[1]-a[4])!=1&&abs(a[1]-a[5])!=1&&abs(a[1]-a[6])!=1)
    if(abs(a[2]-a[5])!=1&&abs(a[2]-a[6])!=1)
    if(abs(a[3]-a[4])!=1&&abs(a[3]-a[8])!=1&&abs(a[4]-a[7])!=1)
    if(abs(a[4]-a[5])!=1&&abs(a[4]-a[7])!=1&&abs(a[4]-a[8])!=1&&abs(a[4]-a[9])!=1)
    if(abs(a[5]-a[6])!=1&&abs(a[5]-a[8])!=1&&abs(a[5]-a[9])!=1)
    if(abs(a[6]-a[9])!=1)if(abs(a[7]-a[8])!=1)if(abs(a[8]-a[9])!=1)return true;
    return false;

}
int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9},count=0;
    do{
        if(judge(a)){
            count++;
            printf("  %d %d %d\n%d %d %d %d\n%d %d %d  \n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
        }
    }while(next_permutation(a,a+10));
    printf("cout:%d\n",count);
    return 0;
}
