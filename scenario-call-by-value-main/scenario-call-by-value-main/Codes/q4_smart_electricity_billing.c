#include <stdio.h>

float calculateBill(int units) {
    float bill;
    if (units <= 100) {
        bill = units * 1.5f;
    } else if (units <= 300) {
        bill = 100 * 1.5f + (units - 100) * 2.0f;
    } else {
        bill = 100 * 1.5f + 200 * 2.0f + (units - 300) * 3.0f;
    }
    return bill;
}

void displayBill(float amount) {
    printf("Total Bill: \u20b9%.2f\n", amount);
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    float amount = calculateBill(units);
    displayBill(amount);

    return 0;
}
