#include <stdio.h>

int main(){
FILE *fp;
char ch;

fp = fopen("sahilamt.txt","w");
printf("Enter value you want to save and press q for quit");
while(1){
	scanf("%c",&ch);
	if(ch == 'q'){
		break;
	}
	fputc(ch, fp);
}

return 0;
}
