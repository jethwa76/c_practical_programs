#include <stdio.h>
int main() {
    int numbers[] = {5, 2, 9, 1, 7, 8 ,4 ,3};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Numbers in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}