/*  Length is given in centimeters. Convert it into feets and inches */
#include<stdio.h>
/* 1 foot =30.48 cm
    1 inch = 2.54 cm */
int main()
{int cm;

	printf("enter length in centimeter: ");
	scanf("%d",&cm);
	
	float inch=0.3937*cm;
	float feet=0.0328*cm;
	
	printf("length if %f feet %f inch",feet,inch);
	return 0;
}
