#include <stdio.h>
#include <string.h>

int main(){
char firstName[25];
char lastName[25];
char fullName[50];

printf("Enter first name:\n");
gets(firstName);

printf("Enter second name:\n");
gets(lastName);

printf("Full name is %s",strcat(firstName,lastName));

return 0;
}
