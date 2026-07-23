#include <stdio.h>

int calculateTotal(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

void checkStatus(int total) {
    if (total >= 120) {
        printf("Total: %d -> PASS\n", total);
    } else {
        printf("Total: %d -> FAIL\n", total);
    }
}

int main() {
    int m1, m2, m3;
    printf("Enter three subject marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    int total = calculateTotal(m1, m2, m3);
    checkStatus(total);

    return 0;
}