#include <stdio.h>
#define Maxsize 32768
struct date{
	int year;
	int month;
	int day;
};
bool Leap(struct date d)
{
	bool leap=false;
	if((d.year%4==0&&d.year%100!=0)||d.year%400==0)
		leap=true;
	return leap;
}
int numberofdays(struct date d)
{
	int days;
	int Month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(d.month==2&&Leap(d)){
		days=29;
	}
	else
		days=Month[d.month-1];
	return days;
}
int main()
{
	struct date born[Maxsize],now[Maxsize],zhu[Maxsize];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d-%d-%d",&born[i].year,&born[i].month,&born[i].day);
	for(int i=0;i<n;i++){
			long int count=0;
	zhu[i].day=born[i].day;
	zhu[i].month=born[i].month;
	zhu[i].year=born[i].year+18;
    for(count=0;now[i].day!=zhu[i].day||now[i].month!=zhu[i].month||now[i].year!=zhu[i].year;count++){
	if(born[i].day!=numberofdays(born[i])){
		now[i].day=born[i].day+1;
		now[i].month=born[i].month;
		now[i].year=born[i].year;
	}else if(born[i].month==12){
		now[i].day=1;
		now[i].month=1;
		now[i].year=born[i].year+1;
	}else{
		now[i].day=1;
		now[i].month=born[i].month+1;
		now[i].year=born[i].year; 
	}
	born[i].day=now[i].day;
	born[i].month=now[i].month;
	born[i].year=now[i].year;
	if(count>7000)
	break;
    }
	if(now[i].year>zhu[i].year)
		printf("-1\n");
	else
    printf("%d\n",count);
    }
	return 0;	
}
