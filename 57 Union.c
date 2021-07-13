#include <stdio.h>
#include <string.h>

union student{
	int roll;
	float fee;
	char name[25];
};
int main(){
  union student a1;
  a1.roll= 100;
printf("%d\n",a1.roll);
  a1.fee= 2000.0;
  printf("%f\n",a1.fee);
  
  strcpy(a1.name, "Sahil");
  printf("%s",a1.name);
 
  
  
  
return 0;
}
