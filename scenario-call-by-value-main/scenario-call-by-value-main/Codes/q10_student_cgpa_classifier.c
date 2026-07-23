#include <stdio.h>

int classify(float cgpa) {
    if (cgpa >= 9.0) return 1;
    if (cgpa >= 7.0) return 2;
    if (cgpa >= 5.0) return 3;
    return 4;
}

void message(int code) {
    const char *labels[] = {"", "Outstanding", "Good", "Average", "Fail"};
    printf("%s\n", labels[code]);
}

int main() {
    float cgpa;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    int code = classify(cgpa);
    message(code);

    return 0;
}