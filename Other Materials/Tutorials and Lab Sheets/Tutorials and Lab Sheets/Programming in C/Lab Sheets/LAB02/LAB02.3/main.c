#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Observe how format commands are used in the following program.

    printf("%5d%5d\n", 1, 2); // Right Align
    printf("%5d%5d\n", 10, 20); //Right Align
    printf("\n\n\n");
    printf("%-5d%-5d\n", 1, 2); // Left Align
    printf("%-5d%-5d\n", 10, 20); // Left Align

    return 0;

}
