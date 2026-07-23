/* 11. Write a function that receives a student's score and returns
       the corresponding grade. Show that changing the score in the
       function does not affect the original. */

#include <stdio.h>

char scoreToGrade(int score) {
    score = score + 5; /* modify local copy to demonstrate no effect on caller */
    if (score >= 90) return 'A';
    if (score >= 75) return 'B';
    if (score >= 60) return 'C';
    if (score >= 40) return 'D';
    return 'F';
}

int main() {
    int score = 82;

    printf("Before call: score = %d\n", score);
    printf("scoreToGrade(score) = %c\n", scoreToGrade(score));
    printf("After call:  score = %d (unchanged)\n", score);

    return 0;
}
