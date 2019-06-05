/* Compute the dimensional weight of a box from input provided by the user */

// directive
#include <stdio.h>

// 'macro' definitions (CONSTANT)

#define INCHES_PER_POUND 166

// function
int main(void) {
    // declarations
    int width, length, height, volume, weight;

    // statements
    printf("Enter width of box: ");     // prompt
    scanf("%d", &width);                // input
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter height of box: ");
    scanf("%d", &height);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}