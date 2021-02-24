#include <stdio.h>
void takeinput(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n, max1, max2, max3, i, j, k, a, b, c,d;
    printf("Enter number of students in class : \n");
    scanf("%d", &n);
    int phy[n], chem[n], math[n];
    printf("Enter marks in physics of n students \n");
    takeinput(phy,n);
    max1 = phy[0];
    for (i = 0; i < n; i++)
    {if (phy[i] > max1)
        {
            max1 = phy[i];
            a = i;
        }
    }
    printf("Enter marks in chemistry of n students \n");
    takeinput(chem,n);
    max2 = chem[0];
    for (i = 0; i < n; i++)
    {if (chem[0] > max2)
        {
            max2 = chem[i];
            b = i;
        }
    }
    printf("Enter marks in maths of n students \n");
    takeinput(math,n);
    
    max3 = math[0];
    for (i = 0; i < n; i++)
    {if (math[i] > max3)
        {
            max3 = math[i];
            c = i;
        }
    }
    int total[n];
    int maxt=0;
    for(int i=0;i<n;i++){
        total[i]=chem[i]+math[i]+phy[i];
        if(total[i]>maxt){
            maxt=total[i];
            d=i;}}
    printf("roll no %d got 1st position with %d marks out of 300",d+1,total[d]);
    if(a==b || a==c || b==c){
        printf("\nsame student has score highest marks in more than 1 subject");
    }
    return 0;
}