#include <stdio.h>

int main(){
    float a, b;
    
    printf("Enter the first number : ");
    scanf("%f", &a);
    
    printf("Enter the Second number : ");
    scanf("%f", &b);

    float division = a / b;
    printf("The division result is : %f", division);

    int quotient = (int)division;

    float c = a - (quotient * b);
    printf("\nThe remainder is : %f\n", c);
    
    return 0;
}
