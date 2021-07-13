#include <stdio.h>

int main(){
char firstName[25];

printf("Enter first name\n");
gets(firstName);

printf("First name is %s",strupr(firstName));

return 0;
}
