/* Input a number and find sum of that number with a number one greater than it. */
#include<stdio.h>
int main()
{
	float a;
	printf("enter the number:");
	scanf("%f",&a);
	float sum=(a+ (a+1));
	printf("sum is: %f",sum);
	return 0;
}
