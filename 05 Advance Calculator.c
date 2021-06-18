#include <stdio.h>

int main(){
	// ADVANCE CALCULATOR PROJECT IN C	
	
	// DECLARING VARIABLES
	int firstNumber, secondNumber, add, sub, mul, div, mod;
    
    //Getting User Input 
    printf("Enter First Number \n");
    scanf("%d",&firstNumber);
    
    printf("Enter Second Number \n");
    scanf("%d",&secondNumber);
    
    //Calculating
	add = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
	
	// Printing
	printf("the sum is %d\n", add);
	printf("the difference is %d\n", sub);
	printf("the multiplication is %d\n", mul);
	printf("the division is %d\n", div);
	printf("the modulous is %d\n", mod);
	
	return 0;
}
