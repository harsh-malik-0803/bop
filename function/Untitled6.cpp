#include<stdio.h>
void quadratic(double b,double c){
	float d=b*b-4*c;
	if(d>0) printf ("real roots");
	else if(d<0) printf("complex roots ");
	else printf("equal roots ");
	
}
int main()
{
	printf("Enter the coefficient int quadratic equation :");
	double b,c;
	scanf ("%lf%lf",&b,&c);
	printf("quadratic equation x^2+%lfx+%lf=0 has ",b,c);
	quadratic(b,c);
	return 0;
}
