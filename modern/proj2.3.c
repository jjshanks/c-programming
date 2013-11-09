/* Calculate the volume of a sphere with a radius of 10 */
#include <stdio.h>
#include <math.h>

int main(void) {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("%.2f\n", 4.0f / 3.0f * M_PI * radius * radius * radius);
    return 0;
}
