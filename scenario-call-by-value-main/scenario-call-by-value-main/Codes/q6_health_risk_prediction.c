#include <stdio.h>

float calculateBMI(float w, float h) {
    return w / (h * h);
}

int riskLevel(float bmi) {
    if (bmi < 18.5) return 1;
    if (bmi <= 25) return 2;
    return 3;
}

void printRisk(int level) {
    const char *messages[] = {"", "Eat more", "Healthy", "Reduce weight"};
    printf("%s\n", messages[level]);
}

int main() {
    float weight, height;
    printf("Enter weight (kg) and height (m): ");
    scanf("%f %f", &weight, &height);

    float bmi = calculateBMI(weight, height);
    int level = riskLevel(bmi);
    printRisk(level);

    return 0;
}