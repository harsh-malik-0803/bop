#include<stdio.h>
int main()
{
	int day,month,year;
	printf("enter any date (date, month ,year) : ");
	scanf("%d%d%d",&day,&month,&year);
	int remd;
	if((month<=7 && month%2==1 ) || (month>=8 && month%2==0)){
		remd=31-day;
	}
	if(month==2){
		remd=28-day;
	}
	else remd=30-day;
	printf("remaining days in month = %d",remd);
	
	return 0;
}
