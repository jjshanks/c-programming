#include <stdio.h>

void main() {
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date ");
    printf("%04d%02d%02d\n", year, month, day);

}
