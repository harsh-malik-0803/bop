#include<stdio.h>
int main(){
    int a,b;
    printf("enter number rows and column of matrix m1 : ");
    scanf("%d%d",&a,&b);
    int m1[a][b];
    printf("input the elements of matrix m1 : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    int c,d;
    printf("enter number rows and column of matrix m2 : ");
    scanf("%d%d",&c,&d);
    
    int m2[c][d];
    
    printf("input the elements of matrix m2 : \n ");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&m2[i][j]);
        }
    }

    if (b==c ){
        printf("multiplication exists and resultant matrix of order %d*%d is :\n ",a,d);
        int ans[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            ans[i][j]=0;
        }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                for(int k=0;k<b;k++)
                ans[i][j] +=m1[i][k]*m2[k][j];
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }
    else printf(" their multiplication doesn't exist ");
}