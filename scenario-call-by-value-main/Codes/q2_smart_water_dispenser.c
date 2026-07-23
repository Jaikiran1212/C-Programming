#include <stdio.h>

int decideMode(int temp) {
    if (temp < 25) return 1;
    if (temp <= 40) return 2;
    return 3;
}

void displayMode(int mode) {
    const char *modes[] = {"", "Cold Water", "Normal Water", "Hot Water"};
    printf("Dispensing: %s\n", modes[mode]);
}

int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    int mode = decideMode(temp);
    displayMode(mode);

    return 0;
}