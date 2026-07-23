/* 19. Write a function that converts lowercase letters to
       uppercase. Pass a char by value and return the result. */

#include <stdio.h>
#include <ctype.h>

char toUpperChar(char c) {
    return toupper(c);
}

int main() {
    printf("toUpperChar('g') = %c\n", toUpperChar('g'));
    return 0;
}
