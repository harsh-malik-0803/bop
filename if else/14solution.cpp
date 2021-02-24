/* roots of quadratic equation. Roots can be real/equal/complex */
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b,c,d;
	printf("enter value of(a,b,c) in equation = ax^2 + bx +c");
	scanf("%f%f%f",&a,&b,&c);
	float e=(b*b-4*a*c);
	d=sqrt(e);
	float x1=((-b+d)/(a*2));
	float x2=((-b-d)/(a*2)); 
	if (e>=0)
	{printf("the real roots of equation are :%f,%f ",x1,x2);}
	else {
		printf("the roots are complex ");
	}
	return 0;
}
