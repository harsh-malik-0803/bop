#include<stdio.h>
void check(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("non prime");
			break;
		}}
	
	if (i==n){
		printf("prime ");
	}
}
int prime(int n){
	int r,i=3,j,count;
	printf("2 ");
	for (count=2;count<=n;i++)
    {
	for(j=2;j<i;j++)
    {
        if(i%j==0)
        break ;
    }
        if (j==i)
       { printf("%d ",i);
       count++;
       }
	   }
	return 0;  
}
int main()
{
	int n;
	printf("enter your number : ");
	scanf("%d",&n);
	printf("your entered number is ");
	check(n);
	
	printf("\n%d prime number from 2 are : ",n);
	prime(n);
	return 0;
}
