#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the maximum using else if ladder
    if (num1 > num2 && num1 > num3) {
        printf("The maximum number is %d\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The maximum number is %d\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("The maximum number is %d\n", num3);
    } else {
        printf("Two or more numbers are equal and the largest.\n");
    }

    return 0;
}
