#include <stdio.h>

int main() {
    int sum = 0;

    // Loop through the first 10 numbers
    for (int i = 1; i <= 10; i++) {
        sum += i;  // Add the current number to the sum
    }

    // Print the sum
    printf("The sum of the first 10 numbers is: %d\n", sum);

    return 0;
}
