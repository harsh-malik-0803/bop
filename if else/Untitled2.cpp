/* Using if-else and && operator, find max out of 3 non-distinct numbers.*/
#include<iostream>
int main()
{
	float a,b,c;
	printf("enter the three numbers(a,b,c):");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
		if(a>c)
		{
		printf("a is greater");}
		if(c>a){printf("c is greater ");
		}}
	else if (b>a){
		if(b>c)
		{printf("b is greater");}
		if(c>b)
		{printf("c is greater ");}}
	else if( a==b && a>c || a>b && b==c){
		printf("%f is greater ",a);
	}
	else if( a==b && a>c){
		printf("%f is greater ",a);
	}
	
	return 0;
}
