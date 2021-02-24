#include <stdio.h>

int fact(int a){
    int i=1,fac=1;
    for(i=1;i<=a;i++)
    fac*=i;
    return fac;
}
int pow1(int a,int b){
    int power =1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    return power;
}
int sum_series(int n, int x){
    float s=0;
    int a,r;
      for(int i=1;i<=n;i++){
            a=fact(2*i-1);
            r=pow1(-1,i+1);
            s+=r*pow1(x,2*i-1)/a; 
        }
    printf("%f",s);
    return 0;
}
int main(){
    int x,n;
    printf("Enter n and x : ");
    scanf("%d %d",&n,&x);
    sum_series(n,x);
    
    return 0;
}
