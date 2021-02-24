#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number of rows and column in matrix : ");
    scanf("%d%d",&a,&b);
    int m[a][b];
    printf("input the elements of matrix :\n ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("transpose of above matrix is : \n");
       for(int i=0;i<a;i++){
        for(int j=i;j<b;j++){
            int temp=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=temp;
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    }
