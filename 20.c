#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter a digit: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Add it to the reversed number
        num /= 10;  // Remove the last digit from the original number
    }
    printf("Reversed digit: %d\n", reversedNum);
    return 0;
}