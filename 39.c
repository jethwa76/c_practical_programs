#include <stdio.h> 

int main() { 

    int n = 4; // Number of rows 

    for (int i = 1; i <= n; i++) { 

        for (int j = i; j < n; j++) 

            printf(" "); 

        for (int j = 1; j <= (2 * i - 1); j++) 

            printf("%d", j % 2); 

        printf("\n"); 

    } 

    return 0; 

} 