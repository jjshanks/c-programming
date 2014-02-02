#include <stdio.h>

/*
 * Magic Square
 *
 * 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 * 16  3  2 13
 *  5 10 11  8
 *  9  6  7 12
 *  4 15 14  1
 * Row sums: 34 34 34 34
 * Column sums: 34 34 34 34
 * Diagonal sums: 34 34
 */
void main() {

    int values[16];
    int rows[4] = {0,0,0,0};
    int cols[4] = {0,0,0,0};
    int diag[2] = {0,0};
    int i, j;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    for(i = 0; i < 16; i++) {
        scanf("%d", &values[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            int value = values[4*i + j];
            rows[i] += value;
            cols[j] += value;
            if(i == j) {
                diag[0] += value;
            }
            if(i + j == 3) {
                diag[1] += value;
            }
            if(j == 0) {
                printf("%2d", value);
            } else {
                printf("%3d", value);
            }
        }
        printf("\n");
    }

    printf("Row sums: %d %d %d %d\n", rows[0], rows[1], rows[2], rows[3]);
    printf("Column sums: %d %d %d %d\n", cols[0], cols[1], cols[2], cols[3]);
    printf("Diagonal sums: %d %d\n", diag[0], diag[1]);

}
