#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	printf("Enter a number of maximum 4 digits : ");
	scanf("%d", &n);
	if(n/10000 != 0) printf("\nYou must enter a number of 4 digits or less.");
	else{
		switch(n/1000){
			case 1 :
				printf("one thousand ");
				break;
			case 2:
				printf("two thousand ");
				break;
			case 3 :
				printf("three thousand ");
				break;
			case 4 :
				printf("four thousand ");
				break;
			case 5 :
				printf("five thousand ");
				break;
			case 6 : 
				printf("six thousand ");
				break;
			case 7 :
				printf("seven thousand ");
				break;
			case 8 :
				printf("eight thousand ");
				break;
			case 9 :
				printf("nine thousand ");
				break;
		}
		int x = n/100;
		switch(x%10){
			case 1 :
				printf("one hundred ");
				break;
			case 2:
				printf("two hundred ");
				break;
			case 3 :
				printf("three hundred ");
				break;
			case 4 :
				printf("four hundred ");
				break;
			case 5 :
				printf("five hundred ");
				break;
			case 6 : 
				printf("six hundred ");
				break;
			case 7 :
				printf("seven hundred ");
				break;
			case 8 :
				printf("eight hundred ");
				break;
			case 9 :
				printf("nine hundred ");
				break;
		}
		int y = n/10;
		switch(y%10){
			case 1 :
				switch(n%10){
					case 0 :
						printf("ten.");
					case 1 :
						printf("eleven.");
						break;
					case 2:
						printf("twelve.");
						break;
					case 3 :
						printf("thirteen.");
						break;
					case 4 :
						printf("fourteen.");
						break;
					case 5 :
						printf("fifteen.");
						break;
					case 6 : 
						printf("sixteen. ");
						break;
					case 7 :
						printf("seventeen.");
						break;
					case 8 :
						printf("eighteen.");
						break;
					case 9 :
						printf("nineteen.");
						break;
					}
				break;
			case 2:
				printf("twenty ");
				break;
			case 3 :
				printf("thirty ");
				break;
			case 4 :
				printf("forty ");
				break;
			case 5 :
				printf("fifty ");
				break;
			case 6 : 
				printf("sixty ");
				break;
			case 7 :
				printf("seventy ");
				break;
			case 8 :
				printf("eighty ");
				break;
			case 9 :
				printf("ninety ");
				break;
		}
		switch(n%10){
			case 1 :
				printf("one.");
				break;
			case 2:
				printf("two.");
				break;
			case 3 :
				printf("three.");
				break;
			case 4 :
				printf("four. ");
				break;
			case 5 :
				printf("five.");
				break;
			case 6 : 
				printf("six.");
				break;
			case 7 :
				printf("seven.");
				break;
			case 8 :
				printf("eight.");
				break;
			case 9 :
				printf("nine. ");
				break;
		}
	}
	return 0;
}
