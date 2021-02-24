/*  2) Input 2 numbers. Using if and else
(i) If first is bigger add both.
(ii) If 2nd is bigger subtract.   */
#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("enter the second nuumber: ");
	scanf ("%f",&b);
	if(a>b){
		printf("a is greater, so %f",(a+b));
	}
	else {
		printf("b is greater, so %f",(b-a));
	}
	return 0;
}
