#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }float sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("average of array is : %f",(sum/n));
    return 0;
}