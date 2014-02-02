#include <stdio.h>

/*
 * This is terrible and should be ignored.
 */
int main(void) {
    int i, j, k, l, m, n;
    float w, x, y, z;

    scanf("%d", &i);
    scanf(" %d", &j);
    printf("%d %d\n", i, j);
    scanf("%d-%d-%d", &i, &j, &k);
    scanf("%d -%d -%d", &l, &m, &n);
    printf("%d %d %d\n", i, j, k);
    printf("%d %d %d\n", l, m, n);
    scanf("%f", &w);
    scanf("%f ", &x);
    printf("%f %f\n", w, x);
    scanf("%f,%f", &w, &x);
    scanf("%f, %f", &y, &z);
    printf("%f %f\n", w, x);
    printf("%f %f\n", y, z);

}
