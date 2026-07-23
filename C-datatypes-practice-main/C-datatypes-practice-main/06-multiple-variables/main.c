#include <stdio.h>

int main(){
    
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a + c = %d%c",a,c);
    printf("\nx + c = %f",x+c);
    printf("\ndx + w = %lf",dx + x);
    printf("\n((int)dx) + ax = %ld",((int)dx)+ax);
    printf("\na + x = %f",a + x);
    printf("\ns + b = %d",s+b);
    printf("\nax + b = %ld",ax+b);
    printf("\ns + c = %d",s,c);
    printf("\nax + c = %ld",ax,c);
    printf("\nax + ux = %lu",ax+ux);


    return 0;
}
