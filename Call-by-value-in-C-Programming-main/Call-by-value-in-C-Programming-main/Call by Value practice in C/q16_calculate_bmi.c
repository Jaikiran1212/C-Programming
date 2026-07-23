/* 16. Write a function to calculate BMI (Body Mass Index) given
       weight and height. Pass both by value and return the BMI. */

#include <stdio.h>

double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

int main() {
    printf("calculateBMI(70.0, 1.75) = %.2f\n", calculateBMI(70.0, 1.75));
    return 0;
}
