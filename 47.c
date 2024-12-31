#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, word_count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Count words by checking for spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            word_count++;
        }
    }
    word_count++; // Account for the last word

    printf("Number of words: %d\n", word_count);

    return 0;
}