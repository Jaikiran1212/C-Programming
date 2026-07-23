#include <stdio.h>

int roomStatus(int status) {
    return (status == 1);
}

int checkPayment(int status) {
    return (status == 1);
}

int verifyDate(int dateCode) {
    return (dateCode == 0); /* 0 = not blackout */
}

int verifyCustomer(int flag) {
    return (flag == 0); /* 0 = not flagged */
}

void finalBookingStatus(int a, int b, int c, int d) {
    int total = a + b + c + d;
    if (total == 4) {
        printf("Booking Confirmed\n");
    } else {
        printf("Booking Rejected\n");
    }
}

int main() {
    int room, payment, date, flag;
    printf("Enter room status, payment status, date code, flag status: ");
    scanf("%d %d %d %d", &room, &payment, &date, &flag);

    int a = roomStatus(room);
    int b = checkPayment(payment);
    int c = verifyDate(date);
    int d = verifyCustomer(flag);
    finalBookingStatus(a, b, c, d);

    return 0;
}