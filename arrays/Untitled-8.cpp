#include<stdio.h>
bool compare(int a[],int s[],int n1,int n2){
    if(n2!=n1){
    return false;
    }
    for(int i=0;i<n1;i++){
        if(a[i]!=s[i]){
            return false; 
        }}
        return true ;
}
int main(){
    int n1;
    printf("enter the number of elements in array1 : ");
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int n2;
    printf("enter the number of elements in array2 : ");
    scanf("%d",&n2);
    int s[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&s[i]);
    }
    if(compare(a,s,n1,n2)){
        printf("equal");
    }
    else printf("not equal");
 return 0;   
}