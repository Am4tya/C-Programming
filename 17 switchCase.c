/*
syntax : switch (which one to switch){
Case 1
statements;
}

*/
#include <stdio.h>

int main(){
	
	int number;
	printf("Enter Number: ");
    scanf("%d",&number);
    
//    Check the number using switch case..
    switch(number){
    	case 1:
    		printf("Day is Sunday");
    		break;
    	case 2:
    		printf("Day is Monday");
    	    break;
    	case 3:
    		printf("Day is Tuesday");
    		break;
    	case 4:
    		printf("Day is wednesday");
    	    break;
    	case 5:
    		printf("Day is Thrusday");
    	    break;
    	case 6:
    		printf("Day is Friday");
    		break;
    	case 7:
    		printf("Day is Saturday");
    		break;
    	default:
    		printf("Invalid Number");
    				
	}


	return 0;
}
