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
    int odd=0,even=0;
    for(int i=0;i<n;i++){   
        (i%2==0?(odd+=a[i]):(even+=a[i]));    /* took a[0] as first term not 0th term*/ 
    }
    printf("sum of even terms are : %d ",even );
    printf("\nsum of odd terms are : %d",odd);
    return 0;
}