/* 20. Create a function to determine the simple interest. Pass all
       values by value and return the result. Confirm that originals
       are unchanged. */

#include <stdio.h>

double simpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double principal = 1000, rate = 5, time = 3;

    printf("Before call: principal = %.2f, rate = %.2f, time = %.2f\n", principal, rate, time);
    printf("simpleInterest(1000, 5, 3) = %.2f\n", simpleInterest(principal, rate, time));
    printf("After call:  principal = %.2f, rate = %.2f, time = %.2f (unchanged)\n",
           principal, rate, time);

    return 0;
}
