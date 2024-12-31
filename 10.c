#include <stdio.h>

int main() {
    int a, b;

    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable
    a = a + b; // Step 1: Add a and b
    b = a - b; // Step 2: Subtract b from the new value of a to get the original a
    a = a - b; // Step 3: Subtract the new value of b from the new value of a to get the original b

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
