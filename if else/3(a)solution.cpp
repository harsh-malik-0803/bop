/* Input 2 distinct numbers . Using if and else), show which is bigger.  */
#include<stdio.h>
int main()
{float a,b;
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("enter the second nuumber: ");
	scanf ("%f",&b);
	if(a>b){
		printf("the greatest number is %f",a);
	}
	else {
		printf("the greatest number is %f",b);
	}
	return 0;
}
