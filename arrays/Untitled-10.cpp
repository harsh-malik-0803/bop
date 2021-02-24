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
    int max=a[0],i=0,t;
    for(;i<n;i++){
        if(a[i]>max){
            max=a[i];
            t=i;}
    }
    printf("index of maximum term is %d and its value is %d",t+1,max); 
    printf("\nnumber of indexes lower than it are %d",t);
    printf("\nnumber of indexes greater than it are %d",n-t-1);
    return 0;
}