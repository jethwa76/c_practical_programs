#include <stdio.h> 

int main() { 

    int n = 5, coeff; 

    for (int i = 0; i < n; i++) { 

        for (int space = 1; space <= n - i; space++) 

            printf(" "); 

        coeff = 1; 

        for (int j = 0; j <= i; j++) { 

            printf("%d ", coeff); 

            coeff = coeff * (i - j) / (j + 1); 

        } 

        printf("\n"); 

    } 

    return 0; 

} 