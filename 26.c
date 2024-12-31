#include <stdio.h>

int main() {
    int i, marks;

    for (i = 1; i <= 5; ++i) {
        printf("Enter marks for student %d: ", i);
        scanf("%d", &marks);

        if (marks >= 90) {
            printf("Grade: A\n");
        } else if (marks >= 80) {
            printf("Grade: B\n");
        } else if (marks >= 70) {
            printf("Grade: C\n");
        } else if (marks >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}