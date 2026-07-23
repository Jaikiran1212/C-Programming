#include <stdio.h>

int checkSpeed(int speed) {
    if (speed < 40) return 1;
    if (speed <= 80) return 2;
    return 3;
}

void displayWarning(int code) {
    const char *messages[] = {"", "Too Slow", "Normal Speed", "Over Speeding Alert"};
    printf("%s\n", messages[code]);
}

int main() {
    int speed;
    printf("Enter speed: ");
    scanf("%d", &speed);

    int code = checkSpeed(speed);
    displayWarning(code);

    return 0;
}