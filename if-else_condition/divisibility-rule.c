#include <stdio.h>

int main() {
    int number;

    // accepting the user for input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Check divisibility conditions
    // A number divisible by both 2 and 3 is also divisible by 6
    if (number % 2 == 0 && number % 3 == 0) {
        printf("%d is divisible by both 2 and 3.\n", number);
    } 
    else if (number % 2 == 0) {
        printf("%d is divisible by 2.\n", number);
    } 
    else if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } 
    else {
        printf("%d is divisible by neither 2 nor 3.\n", number);
    }

    return 0;
}
