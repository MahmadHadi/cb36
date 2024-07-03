// input -> year -> check if given year is a leap year or not 
// 2016 2020 2024 2028 2032 ... 

#include <stdio.h>
void main() {
    int year; 
    printf("Enter any year : ");
    scanf("%d", &year); // year = 2024 

    // 0 => false 
    // 1 => true
    
    // absolute.c
    if (year < 0) {
        year = year * -1; 
    }
    if (year % 4 == 0) { // 
        printf("%d is a leap year ", year);
    } 
    else {
        printf("%d is a normal year ", year);
    } 
}

// i/p -> -2024 
// o/p -> "2024 is a leap year "