/* Print grades of a student A+/A/B/C/D/E using if-else ladder */
#include<stdio.h>
int main()
{
	float n;
	printf("enter your marks of paper(out of 50): ");
	scanf("%f",&n);
	if(n>45){
		printf("A+");
	}
	else if(n>35 && n<46){
		printf("A");
	}
	else if(n<36 && n>25){
		printf("B");
	}
	else if (n>15 && n<26){
		printf("C");
	}
	else if (n>7 && n<16){
		printf("D");}
	else if (n>=0 && n<8){
		printf("E");}	
	return 0;
}
