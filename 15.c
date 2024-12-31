#include <stdio.h>

int main() {
    int units;
    float bill;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on the unit slab
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add a surcharge of 20%
    bill = bill + (bill * 0.20);

    // Display the total bill
    printf("Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}
