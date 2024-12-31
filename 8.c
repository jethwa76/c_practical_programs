#include <stdio.h>
#define PI 3.14159
int main() {
    float length, width, radius, areaRectangle, areaCircle;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    areaRectangle = length * width;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    areaCircle = PI * radius * radius;
    printf("\nThe area of the rectangle is: %.2f", areaRectangle);
    printf("\nThe area of the circle is: %.2f\n", areaCircle);
     return 0;
}