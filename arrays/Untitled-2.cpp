#include<stdio.h>
int max_number(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    return max;
}
int min_number(int a[],int n){
    int min= a[0];
    for(int i=0 ;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("maximum element of array is : %d ",max_number(a,n));
    printf("\nminimum element of array is : %d ",min_number(a,n));
    return 0;
}