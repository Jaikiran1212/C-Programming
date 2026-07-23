/* 17. Write a function that simulates a voting system. Accept age
       by value and return eligible or not. */

#include <stdio.h>

int isEligibleToVote(int age) {
    return (age >= 18);
}

int main() {
    printf("isEligibleToVote(20) = %s\n", isEligibleToVote(20) ? "Eligible" : "Not Eligible");
    return 0;
}
