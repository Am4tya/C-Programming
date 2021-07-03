#include <stdio.h>
// WAP in C that accept n number of array & sort them in ascending.
int main(){
int n , i, j, temp; // size of array , i is for forloop 

printf("Enter the number:\n");
scanf("%d",&n);

int num[n]; // Define Array.

// store value in variable
for(i=0; i<n; i++){
	printf("Enter number %d:\n",i+1);
	scanf("%d",&num[i]);
}

// Sorting Value
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		if(num[i]< num[j]){
			temp = num[i];
	       num[i]= num[j];
	       num[j]= temp;
		}
	}
}

// printing value
for(i=0; i<n; i++){
	printf("\n%d\n",num[i]);
}

return 0;
}
