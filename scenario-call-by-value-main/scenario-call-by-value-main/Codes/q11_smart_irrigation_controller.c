#include <stdio.h>

int checkMoisture(int level) {
    return (level < 40);
}

int checkRain(int forecast) {
    return (forecast == 0);
}

int checkTime(int t) {
    return (t == 1);
}

void decideAction(int m, int r, int t) {
    int total = m + r + t;
    if (total == 3) {
        printf("Irrigate\n");
    } else {
        printf("Don't Irrigate\n");
    }
}

int main() {
    int moisture, rain, time;
    printf("Enter moisture, rain forecast (0/1), time (1=morning): ");
    scanf("%d %d %d", &moisture, &rain, &time);

    int m = checkMoisture(moisture);
    int r = checkRain(rain);
    int t = checkTime(time);
    decideAction(m, r, t);

    return 0;
}