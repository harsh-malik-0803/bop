#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements you want to take : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int first=a[0],second=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>first){
            second=first;
            first=a[i];}
        else {
            if(i==0){continue;}
            else {
                second=a[1];
                if(a[i]>a[1]){
                    second=a[i];
                }
            }
        }
        
    }
    if(second==first)
    printf("there is no second largest element "); 
    else printf("the second largest element in array is : %d",second);
    return 0;
}