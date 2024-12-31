#include <stdio.h>

int main() {
    float percentage;

    // Input the student's percentage
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Determine the result based on percentage
    if (percentage >= 90) {
        printf("Grade: A\nExcellent Performance!\n");
    } else if (percentage >= 80) {
        printf("Grade: B\nVery Good!\n");
    } else if (percentage >= 70) {
        printf("Grade: C\nGood Job!\n");
    } else if (percentage >= 60) {
        printf("Grade: D\nSatisfactory.\n");
    } else if (percentage >= 50) {
        printf("Grade: E\nNeeds Improvement.\n");
    } else {
        printf("Grade: F\nFail. Better luck next time.\n");
    }

    return 0;
}
