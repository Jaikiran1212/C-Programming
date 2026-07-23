/*
 * Functions Practice Basics
 * A collection of simple C programs demonstrating function usage.
 */

#include <stdio.h>

/* 1. Print "Hello Amrita" */
void printHello() {
    printf("Hello Amrita\n");
}

/* 2. Print the square of a number */
int square(int n) {
    return n * n;
}

/* 3. Return the largest of two numbers */
int largest(int a, int b) {
    return (a > b) ? a : b;
}

/* 4. Return the factorial of a number */
long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

/* 5. Check whether a number is even or odd using a function */
int isEven(int n) {
    return (n % 2 == 0);
}

/* 6. Calculate the area of a circle using a function */
double areaOfCircle(double radius) {
    return 3.14159 * radius * radius;
}

/* 7. Swap two numbers using a function (using pointers) */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 8. Find the sum of digits using a function */
int sumOfDigits(int n) {
    int sum = 0;
    if (n < 0) {
        n = -n;
    }
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

/* 9. Reverse a number using a function */
int reverseNumber(int n) {
    int reversed = 0;
    int isNegative = 0;

    if (n < 0) {
        isNegative = 1;
        n = -n;
    }

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return isNegative ? -reversed : reversed;
}

/* 10. Check whether a number is prime using a function */
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    /* 1. Print Hello Amrita */
    printHello();

    /* 2. Square of a number */
    printf("Square of 5: %d\n", square(5));

    /* 3. Largest of two numbers */
    printf("Largest of 12 and 27: %d\n", largest(12, 27));

    /* 4. Factorial */
    printf("Factorial of 6: %ld\n", factorial(6));

    /* 5. Even or odd */
    int num = 15;
    printf("%d is %s\n", num, isEven(num) ? "Even" : "Odd");

    /* 6. Area of circle */
    printf("Area of circle with radius 4.0: %.2f\n", areaOfCircle(4.0));

    /* 7. Swap two numbers */
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    /* 8. Sum of digits */
    printf("Sum of digits of 12345: %d\n", sumOfDigits(12345));

    /* 9. Reverse a number */
    printf("Reverse of 6789: %d\n", reverseNumber(6789));

    /* 10. Prime check */
    int testNum = 29;
    printf("%d is %s\n", testNum, isPrime(testNum) ? "Prime" : "Not Prime");

    return 0;
}
