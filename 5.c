#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf("\t");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}