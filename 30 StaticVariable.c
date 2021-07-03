#include <stdio.h>
//function Defination..
void sayHello();


int main(){      
int i;
for(i=1; i<10; i++){
	sayHello();
}
return 0;
}

void sayHello(){
	static int num = 1;
	printf("Hello from number %d\n",num);
	num++;
}

