/* Calculate the volume of a sphere with a radius of 10 */
#include <stdio.h>
#include <math.h>

#define RADIUS 10.0f

int main(void) {
    printf("%.2f\n", 4.0f / 3.0f * M_PI * RADIUS * RADIUS * RADIUS);
    return 0;
}
