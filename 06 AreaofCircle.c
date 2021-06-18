#include <stdio.h>
#define PI 3.14

int main(){
 
    // Write in C. Find the area of circle PI*RSquare
    
    float radius, area;
    printf("Enter Radius \n");
    scanf("%f",&radius);
    
    area = PI * radius * radius;
    
    // printing 
    
    printf("The area of circle is %.2f", area);

    
    return 0;
}
