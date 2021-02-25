#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	printf("Enter a date : ");
	scanf("%d", &n);
	printf("\n");
	n %= 7;
	switch(n){
		case 0 : 
			printf("Sunday");
			break;
		case 1 :
			printf("Monday");
			break;
		case 2 :
			printf("Tuesday");
			break;
		case 3 :
			printf("Wednesday");
			break;
		case 4 :
			printf("Thursday");
			break;
		case 5 :
			printf("Friday");
			break;
		case 6 :
			printf("Saturday");
			break;
	}
	return 0;
}
