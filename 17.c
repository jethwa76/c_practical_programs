#include <stdio.h>
#include <math.h> // For the M_PI constant

int main() {
    int choice;
    float side, length, breadth, radius, area;

    // Display menu for shape selection
    printf("Choose the shape to calculate the area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    // Perform calculation based on choice
    switch (choice) {
        case 1:
            // Area of Square
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the square: %.2f\n", area);
            break;

        case 2:
            // Area of Rectangle
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the breadth of the rectangle: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of the rectangle: %.2f\n", area);
            break;

        case 3:
            // Area of Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * radius * radius; // M_PI is the value of π from <math.h>
            printf("Area of the circle: %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}
