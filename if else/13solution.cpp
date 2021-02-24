/*  Given numbers of days, Compute numbers of years, months & remaining days. Can you
handle leap years as well? */
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("enter the number of days: ");
	scanf("%d",&a);
	int year = a/365;
	int month = (a%365)/30;
	int days= ((a%365)%30);
	printf("year=%d , month=%d , days=%d",year,month,days); 
	return 0;
}
