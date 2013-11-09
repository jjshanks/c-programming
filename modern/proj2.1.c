/* Print a check mark
 *        *
 *       *
 *      *
 * *   *
 *  * *
 *   *
 */

// compiled with: gcc -std=c99 proj2.1.c

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 6; i++) {
        for(int j = 0; j < 8; j++) {
            if(i - j == 3) {
                printf("*");
            } else if(i + j == 7) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
