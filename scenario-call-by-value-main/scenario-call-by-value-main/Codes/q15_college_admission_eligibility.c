#include <stdio.h>

int checkAcademic(int marks) {
    return (marks >= 80);
}

int checkExam(int score) {
    return (score >= 60);
}

int checkBacklog(int backlog) {
    return (backlog == 0);
}

int categoryBonus(char cat) {
    if (cat == 'G' || cat == 'g') return 0;
    if (cat == 'O' || cat == 'o') return 2;
    if (cat == 'S' || cat == 's') return 5;
    return 5; /* ST or default */
}

void admissionDecision(int a, int b, int c, int bonus) {
    /* a and b here are the ORIGINAL marks/score (per spec, total uses 12th + exam + bonus) */
    int totalScore = a + b + bonus;
    if (c == 1 && totalScore >= 140) {
        printf("Eligible - Total Score: %d\n", totalScore);
    } else {
        printf("Not Eligible - Total Score: %d\n", totalScore);
    }
}

int main() {
    int marks, examScore, backlog;
    char category;

    printf("Enter 12th marks, entrance score, backlog(0/1), category (G/O/S/T): ");
    scanf("%d %d %d %c", &marks, &examScore, &backlog, &category);

    int academicOK = checkAcademic(marks);
    int examOK = checkExam(examScore);
    int backlogOK = checkBacklog(backlog);
    int bonus = categoryBonus(category);

    /* Passing raw marks/score (not just OK flags) so admissionDecision can compute the real total */
    admissionDecision(marks, examScore, backlogOK, bonus);

    return 0;
}