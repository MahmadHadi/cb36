// -101 => absolute => 101 
// 191 => absolute => 191 
#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    // int abs = num;
    // if (num < 0) {
    //     abs = num * -1;
    // }
    // printf("absolute of %d is %d ", num, abs);

    // **************
    
    printf("absolute of %d is ", num);
    if (num < 0) {
        num = num * -1;
    }
    printf("%d ", num);
}
// num = 101 => 101 * -1 = -101 
// num = -101 * -1 = 101 