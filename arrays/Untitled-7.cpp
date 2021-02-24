#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter n: \n"
    );
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }for(int i=0;i<(n+1)/2;i++){
        sum=marks[i]+marks[n-i-1];
        printf("Sum of %d and %d is %d \n",i+1,n-i,sum);}
    return 0;
}