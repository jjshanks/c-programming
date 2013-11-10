#include <stdio.h>

#define TAX_RATE 0.05f

int main(void) {
    float subtotal;
    printf("Enter an amount: ");
    scanf("%f", &subtotal);
    printf("With tax added: $%.2f\n", subtotal * (1.0f + TAX_RATE));
}
