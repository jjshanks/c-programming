/* Calculate balance based on loan info */
#include <stdio.h>

int main(void) {
    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    // convert to percentage
    rate /= 100;
    // convert to monthly
    rate /= 12;

    loan *= 1 + rate;
    loan -= payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan *= 1 + rate;
    loan -= payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan *= 1 + rate;
    loan -= payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}
