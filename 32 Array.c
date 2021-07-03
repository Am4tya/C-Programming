#include <stdio.h>
/*
Array: It can store multiple value of same type in a varible.

*/
int main(){
	
int n = 5;
float price[n];
int i;
for(i=0; i<n ; i++){
	printf("Enter price for %d:\n",i+1);
	scanf("%f",&price[i]);
}

for(i=0; i<n; i++){
	printf("price %d is %f",i+1,price[i]);
}

	return 0;
}
