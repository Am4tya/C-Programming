#include <stdio.h>
int factorial(int num);

// Recurtion : A function which calls itself.
// 0! = 1
// 1! = 1 * 0! =1
// 2! = 2 * 1
// 5! = 5 * 4 * 2 * 1

int main(){
int nums = 5;
printf("The factorial is %d",factorial(nums)); 
	
	return 0;
}
int factorial(int num){
	if(num==1){
	 return 1;
	}
		return(num * factorial(num-1));
	
	
}


