// lets assume on 01/01/1900 there is monday
#include<stdio.h>
int main()
{
    int days,years,d2,m2,y2,month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("input the date in dd mm yy: ");
    scanf("%d%d%d",&d2,&m2,&y2);
    days=d2-1;
    years=y2-1900;

    for(int i=1;i<m2;i++)
    days=days+month[i-1];
        days=days+years*365+years/4;
        if(y2%4==0){
        	if(m2>02) 
			days+=1;
			else days=days-1;
		}
		
 switch((days%7)+1)
    {
    case 1:
     printf("Monday");
       break;
       case 2:
     printf("Tuesday");
       break;
       case 3:
     printf("Wednesday");
       break;
       case 4:
     printf("Thursday");
       break;
       case 5:
     printf("Friday");
       break;
       case 6:
     printf("Saturday");
       break;
       case 7:
     printf("Sunday");
       break;

    }
}
