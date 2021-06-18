#include <stdio.h>

int main(){
	// MY FIRST CALCULATOR PROJECT IN C	
	
	// DECLARING VARIABLES
	int firstNumber = 100;
	int secondNumber = 20;
	int add, sub, mul, div, mod;
    
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
