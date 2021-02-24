/* area and perimeter of circle */
# include<stdio.h>
int main()
{
	float r;
	printf("enter the radius of circle: ");
	scanf("%f",&r);
	float area=((22/7)*r*r);
	float p=(2*(22/7)*r);
	printf("the area of the circle is: %f\n",area );
	printf("perimeter of circle is %f",p);
	return 0;
}
