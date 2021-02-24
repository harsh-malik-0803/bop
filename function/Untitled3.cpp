#include<stdio.h>
int maxfn(int a[], int n){
	
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]> max){
			max=a[i];
		}
		else max=max;
	}
	printf("maximum number is : %d",max);
	return max;
}
int main()
{   int n;
printf("how many numbers you want to choose : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	maxfn(a,n);
	
	return 0;
}
