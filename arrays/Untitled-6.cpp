#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of arrray : ");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++){
        printf("sum of %d and %d element is : %d\n",i+1,n-i,a[i]+a[n-i+-1]);
    }
    if (n%2!=0)
    {   int t=n/2;
        printf("%d th element is : %d",t+1,a[t]);
    }
    
}