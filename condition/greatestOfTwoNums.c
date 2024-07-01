// input -> 2 numbers 
// print which one is greater 

#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d > %d ", num1, num2);
    }
    if (num1 < num2) {
        printf("%d > %d ", num2, num1);
    }
    if (num1 == num2) {
        printf("%d == %d ", num1, num2);
    }
}