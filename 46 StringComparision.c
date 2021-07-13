#include <stdio.h>
#include <string.h>

int main(){
char firstName[25];
char lastName[25];

printf("Enter first name\n");
gets(firstName);

printf("Enter last name\n");
gets(lastName);

if(strcmp(firstName,lastName) == 0){
	printf("Both string are equal");
}
else{
	printf("Both string are not equal");
}

return 0;
}
