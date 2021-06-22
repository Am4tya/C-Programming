// if else if else

/*
Syntax:
if(condition){
statement;
}else if(condition){
statement;
}else if(condition){
statement;
}else if(condition){
statement;
}
*/

#include <stdio.h>

int main(){
    
    int num1 = 100, num2=200 , num3=300;
    
    if(num1 > num2 && num1> num3){
	printf("Num1 is greater than Num2 & Num3");
	}
	else if(num2> num1 &&num2>num3){
	  printf("Num2 is greater than Num1 & Num3");	
	}	
	else {
	printf("Num3 is greater than Num1 & Num2");
	}
	
    return 0;
 }
	
