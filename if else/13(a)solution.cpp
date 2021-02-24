/*  leap year question 13 */
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number of days: ");
	scanf("%d",&a);
	int year = a/365;
	int b=year/4;
	if(year/4>=1){
	int month = ((a%365)-(b))/30;
	int days= (((a%365)-(b))%30);
	printf("year=%d , month=%d , days=%d",year,month,days);
	}
	return 0;
}
