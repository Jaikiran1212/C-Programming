#include <stdio.h>

int validateFloor(int floor) {
    return (floor >= 1 && floor <= 10);
}

int validateWeight(int w) {
    return (w < 1000);
}

void controller(int f, int w) {
    int floorOK = validateFloor(f);
    int weightOK = validateWeight(w);
    int key = floorOK * 10 + weightOK; /* 11, 10, 01, 00 */

    switch (key) {
        case 11:
            printf("Moving to floor %d\n", f);
            break;
        case 10:
            printf("Overload\n");
            break;
        default:
            printf("Floor invalid\n");
    }
}

int main() {
    int floor, weight;
    printf("Enter requested floor and load weight: ");
    scanf("%d %d", &floor, &weight);

    controller(floor, weight);

    return 0;
}