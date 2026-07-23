#include <stdio.h>

int checkAge(int age) {
    return (age >= 21);
}

int checkSalary(int sal) {
    return (sal >= 20000);
}

int checkCredit(int status) {
    return (status == 1);
}

void finalDecision(int a, int s, int c) {
    int total = a + s + c;
    if (total == 3) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
}

int main() {
    int age, salary, creditStatus;
    printf("Enter age, salary, credit status (0/1): ");
    scanf("%d %d %d", &age, &salary, &creditStatus);

    int a = checkAge(age);
    int s = checkSalary(salary);
    int c = checkCredit(creditStatus);
    finalDecision(a, s, c);

    return 0;
}