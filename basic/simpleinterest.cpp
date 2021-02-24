/*   to calcute the simple interest  */

# include<stdio.h>
int main()
{   float p,r,t,si;
	
	printf("enter the value of princlipal ");
	scanf("%f",&p); /* taking principle amount from user */
	printf("enter the rate of interest "); 
	scanf("%f",&r);
	printf("enter the value of time ");
	scanf("%f",&t);
	si=((p*r*t)/100);   /* formula for simple interest */
	printf("simple interest = %f",si);
	return 0;
}
