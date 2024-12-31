#include <stdio.h> 

int main() { 

    int n = 4; // Number of rows 

    for (int i = n; i >= 1; i--) { 

        for (int j = n; j > i; j--) 

            printf(" "); 

        for (int j = 1; j <= (2 * i - 1); j++) 

            printf("%d", j); 

        printf("\n"); 

    } 

    return 0; 

} 