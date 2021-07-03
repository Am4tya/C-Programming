#include <stdio.h>
//function Defination..
void sayHello(char name[]);
int age= 22;  // It is called Global Scope. if we put this on inside int main then it is called local scope.

int main(){      
// It is called local scope.if we put int age in here
printf("Age is %d\n",age);
sayHello("Sahil Amatya");
return 0;
}
//down void is called function written type.  char name[] down one is called parameter.
void sayHello(char name[]){
	printf("Hello %s",name);
}
