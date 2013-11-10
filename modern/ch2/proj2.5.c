#include <stdio.h>

int main(void) {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    float total;
    // 3x^5
    total = 3 * x * x * x * x * x;
    // +2x^4
    total += 2 * x * x * x* x;
    // -5x^3
    total -= 5 * x * x * x;
    // -x^2
    total -= x * x;
    // +7x
    total += 7 * x;
    // -6
    total -= 6;
    printf("%.2f\n", total);
}
