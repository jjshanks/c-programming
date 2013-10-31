#include <stdio.h>

main() {
    float fahr, cel;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;

    printf("F\tC\n");
    while(fahr <= upper) {
        cel = 5.0 * (fahr-32.0)/9.0;
        printf("%3.0f\t%6.1f\n", fahr, cel);
        fahr = fahr + step;
    }
}
