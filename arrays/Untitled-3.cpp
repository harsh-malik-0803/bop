#include<stdio.h>
int main(){
    int n;
    printf("enter number of  elements : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int negative=0,odd=0,even=0;
    for(int i=0;i<n;i++){
        a[i]<0?(negative++):(a[i]%2==0?(even++):(odd++));
    }
    printf("no of negative terms are : %d",negative);
    printf("\nno of even terms are : %d ",even );
    printf("\nno of odd terms are : %d",odd);
    return 0;
}