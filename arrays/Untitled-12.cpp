#include<stdio.h>
int main(){
    int a,b;
    printf("enter the rows and column of first matrix : \n");
    scanf("%d%d",&a,&b);
    int m1[a][b];
    printf("enter elements of first matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    int c,d;
    printf("enter the rows and column of second matrix : \n");
    scanf("%d%d",&c,&d);
    
    int m2[c][d];
    printf("enter the rows and column of second matrix : \n");
    
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    if (a==c && b==d){
        printf("sum exists and resultant matrix is : ");
       for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }
    }
    else printf(" their sum doesn't exist ");
}