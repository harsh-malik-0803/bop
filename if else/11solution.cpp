/*  Using if-else, find max out of 3 distinct numbers. Use of && etc is not allowed*/
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
		{printf("c is greater ");}
		
	}
	
	return 0;
}
