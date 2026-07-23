/* 15. Make a function that accepts a year and determines if it's a
       leap year. Show that year remains unchanged in main(). */

#include <stdio.h>

int isLeapYear(int year) {
    year = year + 1; /* modify local copy to demonstrate no effect on caller */
    year = year - 1;
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int year = 2024;

    printf("Before call: year = %d\n", year);
    printf("isLeapYear(year) = %s\n", isLeapYear(year) ? "Leap Year" : "Not a Leap Year");
    printf("After call:  year = %d (unchanged)\n", year);

    return 0;
}
