#include <stdio.h>

main() {
    int fahr, cel;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;

    while(fahr <= upper) {
        cel = 5 * (fahr-32)/9;
        printf("%d\t%d\n", fahr, cel);
        fahr = fahr + step;
    }
}
