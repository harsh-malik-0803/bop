/* Find max out of 4 distinct numbers without using && etc */
#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("enter the four numbers(a,b,c,d):");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	float max;
	if(a>b){
		if(a>c){if(a>d)
		max=a;
		else max=d;
		}
		else{
			if(c>d) max=c;
			else max=d;
		}
	}
	else {if(b>c){if(b>d)
		max=b;
		else max=d;
		}
		else{
			if(c>d) max=c;
			else max=d;}
	}
	printf("maximum out of 4 numbers is: %f",max);
	return 0;
}
