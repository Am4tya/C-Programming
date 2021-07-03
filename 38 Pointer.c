#include <stdio.h>

int main(){

int a = 10; // Normal variable
int *p = &a; // Pointer variable
int x;
x= *p;

// Remember pointer help to find out memory address.

printf("The value of a is %d\n",a);
printf("The value of p is %d\n",p);
printf("The value of x is %d",x);

return 0;
}
