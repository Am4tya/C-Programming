#include <stdio.h>
#include <string.h>

int main(){
char firstname[25];

printf("Enter name:\n");
gets(firstname);

int length = string_in(&firstname);
printf("The length of string is %d",length);

return 0;
}
int string_in(char *p){
	int count = 0;
    while(*p != '\0'){
    	count++;
    	p++;
	}
    return count;
}
