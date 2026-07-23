/* 8. Write a function to calculate compound interest using
      principal, rate, and time passed by value. Return the
      calculated value. */

#include <stdio.h>
#include <math.h>

double compoundInterest(double principal, double rate, double time) {
    double amount = principal * pow((1 + rate / 100.0), time);
    return amount - principal;
}

int main() {
    printf("compoundInterest(1000, 5, 2) = %.2f\n", compoundInterest(1000, 5, 2));
    return 0;
}
