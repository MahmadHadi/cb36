// * check if given number is multiple of three 
#include <stdio.h>
void main() {
    // num % 3 == 0 -> multiple of three 

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("%d is multiple of 3 ", num);
    } else {
        printf("%d is not multiple of 3 ", num);
    }
}