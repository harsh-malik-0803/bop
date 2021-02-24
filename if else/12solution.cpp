/* Without using && etc, find max as well as min out of 3 numbers. Same if should be 
used to find max as well as min. Aim to use minimum number of if statements  */
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the three numbers ");
	scanf("%f%f%f",&a,&b,&c);
	float max,min;
	if(a>b){
		if(a>c){
			max=a;
			if(b>c){min=c;}
			else min=b;
		}
		else {
			max=c;
			min=b;
		}
	}
	else if(b>a){
		if(b>c){
			max=b;
			if(a>c){min=c;}
			else min=a;
		}
		else {
			max=c;
			min=a;
		}
	}
	printf("maximum is %f\n",max);
	printf("minimum is %f",min);
	return 0;
}
