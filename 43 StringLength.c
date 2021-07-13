#include <stdio.h>
#include <string.h>

int main(){
char FullName[50];
int TotalLength;
printf("Enter Full Name:\n");
gets(FullName);

// Finding Length
TotalLength = strlen(FullName);
printf("The Length of %s is %d",FullName,TotalLength);

return 0;
}
