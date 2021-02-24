/*  Using if-else and && operator, find max out of 3 distinct numbers.*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the three numbers(a,b,c):");
	scanf("%f%f%f",&a,&b,&c);
	float max;
	if((a>b)&& (a>c)){max=a;}
	else if ((b>a)&&(b>c))
		{max=b;}
	else max=c;
	printf("%f is the greatest",max );
	return 0;
}
