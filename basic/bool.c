#include <stdio.h>
#include <stdbool.h>

void main() {
    // bool => false || true 
    // true = 1, false = 0
    bool flag = true;
    printf("flag = %d\n", flag);

    flag = false;
    printf("flag = %d \n", flag);

    flag = !flag; // flag = flase => !flag = true 
    printf("flag = %d \n", flag);


    bool ans = 1 >= 11; // 1 + 11
    printf("ans = %d \n", ans);
    if (ans) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}