#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the maximum
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // Display the result
    printf("The maximum of %d and %d is %d\n", num1, num2, max);

    return 0;
}
