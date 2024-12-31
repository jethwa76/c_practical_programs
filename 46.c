#include <stdio.h>

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int product_matrix[2][2];

    // Multiply the matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            product_matrix[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                product_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", product_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}