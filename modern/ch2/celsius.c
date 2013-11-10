/* Converts a Fahrenheit temp to Celsisus */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit, celsisus;

    printf("Enter Fahrenheit temp: ");
    scanf("%f", &fahrenheit);

    celsisus = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsisus equivalent: %.1f\n", celsisus);
    
    return 0;
}
