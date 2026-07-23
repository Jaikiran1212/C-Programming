/* 10. Write a function to convert Celsius to Fahrenheit. Pass the
       Celsius value and return the Fahrenheit result. */

#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    printf("celsiusToFahrenheit(37.0) = %.2f\n", celsiusToFahrenheit(37.0));
    return 0;
}
