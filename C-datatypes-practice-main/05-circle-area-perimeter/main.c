#include <stdio.h>

int main(){
    
    float perimeter;
    float radius  = 6;

    float area = 3.14 * (radius*radius);
    perimeter = 2 * 3.14 * 6 ; 

    printf("Perimeter of the Circle = %f",perimeter);
    printf("\nArea of the circle = %f",area);
    
    return 0;
}