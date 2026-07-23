/* 18. Create a function that rounds a float to the nearest integer.
       Pass the float by value and return the rounded result. */

#include <stdio.h>

int roundFloat(float value) {
    return (int)(value + 0.5f);
}

int main() {
    printf("roundFloat(4.6) = %d\n", roundFloat(4.6f));
    return 0;
}
