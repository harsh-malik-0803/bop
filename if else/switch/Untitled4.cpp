#include<stdio.h>
int main()
{
	float a,b,r;
	char op,character,c;
	printf("enter the first number = ");
    	scanf("%f",&a);
    while(character !='n'){
    	printf("enter the operation(+,-,*,/):" );
    	scanf(" %c",&op);
    	printf("enter the second number: ");
    	scanf("%f",&b);
    	switch(op){
		case '+':
			r=a+b;
			break;
		case '-' :
			r=a-b;
			break;
		case '*':
			r=a*b;
			break;
		case '/':
		r=a/b;
		break;	
	}
	    a=r;
	    printf("result = %f",r);
    	printf("\nenter y for YES and n for NO : ");
    	scanf(" %c",&character);
    	printf("\nso your first number is : %f",r);
	}
	return 0;
}
