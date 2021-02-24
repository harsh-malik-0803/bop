/*) Convert time given in 24 hour format into 12 hour format. */
#include<stdio.h>
int main()
{
	printf("tell the time now(hour, minutes) : ");
	int min,hr;
	scanf("%d%d",&hr,&min);
	
	if(hr>=12){
		hr=hr-12;
		printf("time is %d:%d pm",hr,min);
	}
	else{
		printf("time is %d:%d am",hr,min);
	}
	return 0;
}
