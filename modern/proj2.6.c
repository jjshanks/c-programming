#include <stdio.h>

int main(void) {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("%.2f\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
}
