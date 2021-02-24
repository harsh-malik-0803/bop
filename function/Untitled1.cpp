#include<stdio.h>
int fact(int n){
	int t=1;
	for(int i=1;i<=n;i++){
		t=t*i;
	}
	return t;
}
int main()
{
	int n,r;
	printf("enter the value of n and r in nCr : ");
	scanf("%d%d",&n,&r);
	int bionomial=fact(n)/(fact(r)*fact(n-r));
	printf("factorial is %d: ",bionomial);
	return 0;
}
