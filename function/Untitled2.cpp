#include<stdio.h>
int pow(int a, int b){
	    int result=1;
	for(int i=1;i<=b;i++){
		result=result*a;
	}
	printf("result is : %d",result);
	return result;
}
int main ()
{
	int a,b;
	printf("enter the value of a,b in a^b : ");
	scanf("%d%d",&a,&b);
	pow(a,b);
	return 0;
}
