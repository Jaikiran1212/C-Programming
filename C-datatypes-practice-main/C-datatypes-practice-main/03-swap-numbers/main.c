#include <stdio.h>

int main(){
    
    int a = 5;
    int b = 10;
    int c;

    printf("Before Swap : %d %d",a,b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter swap : %d %d",a,b);

    return 0;
}