#include <stdio.h>

int checkOverweight(int weight) {
    return (weight > 23) ? 1 : 0;
}

void alertMessage(int status) {
    if (status == 1) {
        printf("ALERT: Bag exceeds the 23kg limit!\n");
    } else {
        printf("Bag weight is within limit.\n");
    }
}

int main() {
    int weight;
    printf("Enter bag weight (kg): ");
    scanf("%d", &weight);

    int status = checkOverweight(weight);
    alertMessage(status);

    return 0;
}