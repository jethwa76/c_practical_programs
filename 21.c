#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, originalNum;

    printf("Enter an integer: "); //O(1)
    scanf("%d", &num); //O(1)

    originalNum = num; 

    while (num != 0) { //O(n/10)
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    //O(1)
    if (originalNum == reversed)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

    return 0;
}