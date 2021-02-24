#include <stdio.h>
#include <math.h>
int fact(int a){
    int i=1,fac=1;
    for(i=1;i<=a;i++)
    fac*=i;
    return fac;
}
int sum_series(int n, int x){
    float s=0;
    int a,r;
      for(int i=1;i<=n;i++){
            a=fact(2*i-1);
            r=pow(-1,i+1);
           s+=r*pow(x,2*i-1)/a; 
        
    }
    printf("%f",s);
    return 0;
}
int main(){
    int x,n;
    printf("Enter x and n");
    scanf("%d %d",&x,&n);
    sum_series(n,x);
    return 0;
}
