#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int date, add;
	printf("Enter a date : ");
	scanf("%d", &date);
	printf("\nEnter days to add to date : ");
	scanf("%d", &add);
	date += add;
	date = date%30 ;
	if(date == 0) date = 30;
	printf("\nNew Date is : %d", date);	
	return 0;
}
