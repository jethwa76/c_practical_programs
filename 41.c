#include <stdio.h>
int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int product = 1;
    for (int i = 0; i < 10; i++) {
        product =product * numbers[i];
    }
    printf("Product of the first 10 numbers: %d\n", product);
    return 0;
}