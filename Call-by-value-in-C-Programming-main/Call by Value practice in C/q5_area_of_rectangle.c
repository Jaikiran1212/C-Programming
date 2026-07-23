/* 5. Write a function to calculate the area of a rectangle. Pass
      length and breadth by value and return the area. */

#include <stdio.h>

double areaOfRectangle(double length, double breadth) {
    return length * breadth;
}

int main() {
    printf("areaOfRectangle(5.0, 3.0) = %.2f\n", areaOfRectangle(5.0, 3.0));
    return 0;
}
