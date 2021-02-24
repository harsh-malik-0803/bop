/* ) Input 2 numbers (non-distinct). Using if-else, find which is bigger. 
Print EQUAL if they are equal */
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
	else if(b>a)  {
		printf("the greatest number is %f",b);
	}
	else{
		printf("Equal");
	}
	return 0;
}
