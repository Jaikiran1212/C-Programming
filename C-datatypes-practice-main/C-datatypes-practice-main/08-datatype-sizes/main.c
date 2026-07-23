#include <stdio.h>

int main() {

    printf("char: %zu byte(s)\n", sizeof(char));
    printf("int: %zu byte(s)\n", sizeof(int));
    printf("float: %zu byte(s)\n", sizeof(float));
    printf("double: %zu byte(s)\n", sizeof(double));
    printf("short int: %zu byte(s)\n", sizeof(short int));
    printf("long int: %zu byte(s)\n", sizeof(long int));
    printf("unsigned long int: %zu byte(s)\n", sizeof(unsigned long int));
    printf("long long int: %zu byte(s)\n", sizeof(long long int));

    return 0;
}