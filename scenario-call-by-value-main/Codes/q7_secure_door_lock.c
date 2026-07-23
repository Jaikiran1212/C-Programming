#include <stdio.h>

int validateCode(int pin) {
    return (pin == 1234);
}

int checkExpiry(int day) {
    return (day < 30);
}

void accessControl(int status1, int status2) {
    /* avoid && / || by multiplying boolean results */
    int allowed = status1 * status2;
    if (allowed == 1) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
}

int main() {
    int pin, day;
    printf("Enter 4-digit PIN and day number: ");
    scanf("%d %d", &pin, &day);

    int s1 = validateCode(pin);
    int s2 = checkExpiry(day);
    accessControl(s1, s2);

    return 0;
}