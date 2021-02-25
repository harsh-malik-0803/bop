#include<stdio.h>
int main()
{
	int n;
	printf("enter any day number : ");
	scanf("%d",&n);
	int a=n%7;
	switch (a){
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 0:
			printf("sunday");
			break;
		default:
		    printf("doesnt exist");				
	}
	return 0;
}
