#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int d1, m1, y1, d2, m2, y2;
	printf("Enter recent date in format dd/mm/yyyy : ");
	scanf("%d%d%d", &d1, &m1, &y1);
	printf("Enter an older date : ");
	scanf("%d%d%d", &d2, &m2, &y2);
	
	int result = 0;
	if(y1==y2){
		if(m1 == m2){
			result += d1 - d2;
		}
		else{
			int x ;
			if(m2 == 2) x = 2;
			else if(m2 == 1 || m2==3 || m2 == 5 || m2== 7 || m2 == 8 || m2 == 10 || m2 == 12) x = 1;
			else x = 0;				
			switch(x){
				case 0 :
					result += 30 - d2;
					break;
				case 1 :
					result += 31 - d2;
					break;
				case 2 :
					result += 28 -d2;
					break;
			}
			result += d1;
			for(int i = m2 + 1; i < m1; i++ ){
				switch(i){
					case 1 :
						result += 31;
						break;
					case 2 :
						result += 28;
						break;
					case 3 :
						result += 31;
						break;
					case 4 :
						result += 30;
						break;
					case 5 :
						result += 31;
						break;
					case 6 :
						result += 30;
						break;
					case 7 :
						result += 31;
						break;
					case 8 :
						result += 31;
						break;
					case 9 :
						result += 30;
						break;
					case 10 :
						result += 31;
						break;
					case 11 :
						result += 30;
						break;
					case 12 : 
						result += 31;
						break;
				}
			}
		}
		
	}
	else{
		if(m1>m2){
			result += 365*(y1-y2);
			for(int i = m2 + 1; i < m1; i++ ){
				switch(i){
					case 1 :
						result += 31;
						break;
					case 2 :
						result += 28;
						break;
					case 3 :
						result += 31;
						break;
					case 4 :
						result += 30;
						break;
					case 5 :
						result += 31;
						break;
					case 6 :
						result += 30;
						break;
					case 7 :
						result += 31;
						break;
					case 8 :
						result += 31;
						break;
					case 9 :
						result += 30;
						break;
					case 10 :
						result += 31;
						break;
					case 11 :
						result += 30;
						break;
					case 12 : 
						result += 31;
						break;
				}
			}
			int x ;
			if(m2 == 2) x = 2;
			else if(m2 == 1 || m2==3 || m2 == 5 || m2== 7 || m2 == 8 || m2 == 10 || m2 == 12) x = 1;
			else x = 0;				
			switch(x){
				case 0 :
					result += 30 - d2;
					break;
				case 1 :
					result += 31 - d2;
					break;
				case 2 :
					result += 28 -d2;
					break;
			}
			result += d1;
		
		}
		else if(m1 == m2){
			if(d1 > d2) result += 365*(y1-y2) + d1-d2;
			else result = 365*(y1-y2)-d2+d1;
		}
		else{
			int x ;
			result += 365*(y1-y2-1);
			if(m2 == 2) x = 2;
			else if(m2 == 1 || m2==3 || m2 == 5 || m2== 7 || m2 == 8 || m2 == 10 || m2 == 12) x = 1;
			else x = 0;				
			switch(x){
				
				case 0 :
					result += 30 - d2;
					break;
				case 1 :
					result += 31 - d2;
					break;
				case 2 :
					result += 28 -d2;
					break;
			}
			result += d1;
			for(int i = m2 + 1; i < m1; i++ ){
				if(i==13) i=1;
				switch(i){
					case 1 :
						result += 31;
						break;
					case 2 :
						result += 28;
						break;
					case 3 :
						result += 31;
						break;
					case 4 :
						result += 30;
						break;
					case 5 :
						result += 31;
						break;
					case 6 :
						result += 30;
						break;
					case 7 :
						result += 31;
						break;
					case 8 :
						result += 31;
						break;
					case 9 :
						result += 30;
						break;
					case 10 :
						result += 31;
						break;
					case 11 :
						result += 30;
						break;
					case 12 : 
						result += 31;
						break;
				}
			}
		}
	}
	printf("Result is : %d", result - 1);
	return 0;
}
