#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int counter=1 ;
    for(int i=0;i<n-1;i+=2){   
        int sum=a[i]+a[i+1];
        printf("sum of %d pair is : %d\n",counter,sum );
        counter++;
    }
    int sum=(n%2==0)?(a[n-1]+a[n]):(2*a[n-1]);
    int t=(n%2==0)?(n/2):((n/2)+1);
    printf("sum of %d pair is : %d ",t,sum);
    return 0;
}