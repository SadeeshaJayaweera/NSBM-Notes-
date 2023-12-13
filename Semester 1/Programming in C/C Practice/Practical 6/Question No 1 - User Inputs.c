#include <stdio.h>

int main() {
    int u[3][3], v[3][3], w[3][3];
    int r, c;

    // Take input for matrix u
    printf("Enter values for matrix u:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("Enter value for %d,%d: ", r+1, c+1);
            scanf("%d", &u[r][c]);
        }
    }

    // Take input for matrix v
    printf("Enter values for matrix v:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("Enter value for %d,%d: ", r+1, c+1);
            scanf("%d", &v[r][c]);
        }
    }

    // Calculate the sum of matrices u and v and store the result in matrix w
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            w[r][c] = u[r][c] + v[r][c];
        }
    }

    // Display matrix w (the sum of matrices u and v)
    printf("The sum of matrices u and v is:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", w[r][c]);
        }
        printf("\n");
    }

    return 0;
}
