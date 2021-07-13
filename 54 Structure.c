#include <stdio.h>
#include <string.h>

 struct student{
int id;
char name[20];
int mark;
 };
 
int main(){
	struct student s1;
	struct student s2;

	s1.id =3;
	s1.mark =60;
	strcpy(s1.name, "Sahil");
	
	s2.id =4;
	s2.mark =50;
	strcpy(s2.name, "Ram");
	
	// Printing structure value 
	printf("s1 ID:%d\n s1 mark:%d\n s1 name:%s\n",s1.id,s1.mark,s1.name);

	printf("s2 ID:%d\n s2 mark:%d\n s2 name:%s\n",s2.id,s2.mark,s2.name);
	
return 0;
}

/*
Structure: Group of disimilar element. We can hold different variables
in same variable;
*/
