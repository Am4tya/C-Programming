#include <stdio.h>

int main(){
	
//	Calculate simple interest in c.

    float principal;
    float time;
    float rate;
    float si;
    
   
    
    printf("Enter principal ");
    scanf("%f",&principal);
    
   printf("Enter time ");
    scanf("%f",&time);
    
     printf("Enter rate ");
    scanf("%f",&rate);
    
     si = (principal* time* rate) /100;
     
    printf("The si unit is %.2f",si);
    
    
	return 0;
}
