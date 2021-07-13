#include <stdio.h>
#include <string.h>

int main(){
char firstName[25];
char copyName[25];

printf("Enter first Name:\n");
gets(firstName);

strcpy(copyName,firstName);

printf("First name is %s",copyName);

return 0;
}
