// user -> age -> input 
// check -> age > 18 -> print "You can vote "
// check -> age < 18 -> print "You cannot vote "
#include <stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age > 18) {
        printf("You can vote ");
    }
    if (age < 18) {
        printf("You cannot vote ");
    }
}