#include <stdio.h>

int main() {
    int evenSum = 0, oddSum = 0; //O(1)

    // Loop through numbers between 51 and 550
    for (int i = 51; i <= 550; i++) {
        if (i % 2 == 0) {
            evenSum += i;  // Add to even sum if the number is even
        } else {
            oddSum += i;   // Add to odd sum if the number is odd
        }
    }

    //O(1)
    // Print the results
    printf("Sum of even numbers between 51 and 550: %d\n", evenSum);
    printf("Sum of odd numbers between 51 and 550: %d\n", oddSum);

    return 0;
}
