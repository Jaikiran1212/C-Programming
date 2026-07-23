#include <stdio.h>

int verifyID(int id) {
    return (id == 1);
}

int checkTicket(int ticket) {
    return (ticket == 1);
}

int healthAndTimeCheck(float temp, float time) {
    int tempOK = (temp < 99.5);
    int timeOK = (time < 915);   /* time as HHMM, e.g. 900 = 9:00 */
    return tempOK + timeOK == 2;
}

void gateDecision(int a, int b, int c) {
    int total = a + b + c;
    if (total == 3) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
}

int main() {
    int id, ticket;
    float temp, time;
    printf("Enter ID valid(1/0), ticket(1/0), temperature, time (HHMM): ");
    scanf("%d %d %f %f", &id, &ticket, &temp, &time);

    int a = verifyID(id);
    int b = checkTicket(ticket);
    int c = healthAndTimeCheck(temp, time);
    gateDecision(a, b, c);

    return 0;
}