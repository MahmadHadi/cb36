// area = 3.1415 * r * r
#include <stdio.h>
void main() {
    float radius;
    printf("Enter radius of a circle : ");
    scanf("%f", &radius);

    float areaOfCircle = 3.1415 * radius * radius;
    printf("area %.2f \n", areaOfCircle);
    printf("area %.2f \n", 3.1415 * radius * radius);
}

// 3.1415 * (-10) * (-10) = 3.1415 * 100 = 314.15 