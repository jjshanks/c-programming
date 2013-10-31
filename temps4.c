#include <stdio.h>

main() {
    float fahr, cel;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;

    printf("C\tF\n");
    while(fahr <= upper) {
        cel = (fahr - 32) * 5.0 / 9.0;
        printf("%6.1f\t%3.0f\n", cel, fahr);
        fahr = fahr + step;
    }
}
