#include <stdio.h>

// write a program in C which swaps two variables..

int main(){
	
	// Declaring Variables
	int a = 10;
	int b = 20;
	int c= 0;
	
	// Swaping..
	a = b;
	b = c;
	c = a;
	
	// Printing..
	printf("The value is %d \n",a);
	printf("The value is %d \n",b);


	return 0;
}
