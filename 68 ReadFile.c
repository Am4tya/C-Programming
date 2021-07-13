#include <stdio.h>
// fgetc(); fputc();

int main(){
FILE *fp;
char ch;

fp = fopen("amatya.txt","r");

if(fp == NULL){
	printf("No Such File Exists.");
}

while(ch !=EOF){ // EOF = End of file
ch = fgetc(fp);
printf("%c",ch);
}
fclose(fp);

return 0;
}
