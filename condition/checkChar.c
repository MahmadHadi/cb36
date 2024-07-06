// input -> char -> check if input is between 'a' to 'z' or 'A' to 'Z' or '0' to '9' or invalid input 

#include <stdio.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int num = ch;
    if (num >= 65 && num <= 90)
        printf("Character is uppercase \n");
    else if (num >= 97 && num <= 122)  
        printf("Character is lowercase \n");
    else if (num >= 48 && num <= 57) 
        printf("Character is digit \n");
    else 
        printf("Invalid input \n");
}