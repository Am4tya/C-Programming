#include <stdio.h>

int main(){
char firstName[25];

printf("Enter first name\n");
gets(firstName);

printf("Reverse first name is %s",strrev(firstName));

return 0;
}
