#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);


 
int main(){
	
int fn, sn;
printf("Enter 1st Number:");
scanf("%d",&fn);

printf("Enter 2nd Number:");
scanf("%d",&sn);

printf("The sum is %d\n",add(fn, sn));
printf("The difference is %d\n",subtract(fn, sn));
printf("The square of 5 is %d",getsquare(5));
return 0;
}



int add(int a, int b){
	int sum = a+b;
	return sum;
}
int subtract(int a, int b){
	int sub = a-b;
	return sub;
}

int getsquare(int num){
return num*num;
}
