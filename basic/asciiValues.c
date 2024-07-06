#include <stdio.h>
void main() {
    int num = 10;
    printf("num {%%d} = %d \n", num);
    printf("num {%%c} = %c \n", num); // ☻

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    
    printf("ch {%%c} = %c \n", ch);
    printf("ch {%%d} = %d \n", ch);

    printf("ascii('%c') = %d ",ch, ch);

    printf("ch = %c \n", ch);
    ch = ch + 1; // ch = 'a' = 97 => ch + 1 = 97 + 1 = 98 = 'b'
    printf("ch = %c \n", ch);
    
    ch = ch + 1; // ch = 'a' = 97 => ch + 1 = 97 + 1 = 98 = 'b'
    printf("ch = %c \n", ch);
    ch = ch + 1; // ch = 'a' = 97 => ch + 1 = 97 + 1 = 98 = 'b'
    printf("ch = %c \n", ch);
    
    // 1 = on = true 
    // 0 = off = false 
    // 97 == 97 
    // 'a' = 97 => 'a' = 97

    // 'a' == 97 
    // true, false -> print X -> %d 
    printf("%d ", 'a' != 97);
}