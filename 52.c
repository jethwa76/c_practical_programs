#include <stdio.h>

float area_rectangle(float length, float width) {
    return length * width;
}

float area_square(float side) {
    return side * side;
}

float area_circle(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float length, width, side, radius;

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);

    printf("Enter side of square: ");
    scanf("%f", &side);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    printf("Area of rectangle: %.2f\n", area_rectangle(length, width));
    printf("Area of square: %.2f\n", area_square(side));
    printf("Area of circle: %.2f\n", area_circle(radius));

    return 0;
}