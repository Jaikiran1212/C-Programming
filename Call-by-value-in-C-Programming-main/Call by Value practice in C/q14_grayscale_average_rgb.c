/* 14. Write a function that accepts three integers (representing
       RGB values) and returns their grayscale average. */

#include <stdio.h>

int grayscaleAverage(int r, int g, int b) {
    return (r + g + b) / 3;
}

int main() {
    printf("grayscaleAverage(120, 200, 80) = %d\n", grayscaleAverage(120, 200, 80));
    return 0;
}
