#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the maximum using else if ladder
    if (num1 >= num2 && num1 >= num3) {
        max = num1; // num1 is greater than or equal to both num2 and num3
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2; // num2 is greater than or equal to both num1 and num3
    } else {
        max = num3; // num3 is greater than or equal to both num1 and num2
    }

    // Display the result
    printf("The maximum of %d, %d, and %d is %d\n", num1, num2, num3, max);

    return 0;
}
