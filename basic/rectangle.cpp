/* perimeter and area of rectangle */
# include<stdio.h>
int main()
{
	float l;
	float b;
	printf("enter the length of rectangle: ");
	scanf("%f",&l);
	printf("enter the breadth of rectangle: ");
	scanf("%f",&b);
	float p=2*(l+b);
	float a=l*b;
	printf("area of rectangle is: %f \n",a);
	
	printf("perimeter of rectangle is: %f",p);
	return 0;
}
