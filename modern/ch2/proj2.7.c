/* Display the number of bills a specified dollar amount can be broken into */
#include <stdio.h>

int main(void) {
    int total, twenties, tens, fives;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &total);

    twenties = total / 20;
    total -= twenties * 20;

    tens = total / 10;
    total -= tens * 10;

    fives = total / 5;
    total -= fives * 5;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", total);

    return 0;
}
