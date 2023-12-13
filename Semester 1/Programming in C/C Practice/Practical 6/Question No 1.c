#include <stdio.h>

int main()
{
    // Declare two 3 x 3 matrices and initialize them with sample values
    int A[3][3] = {{3, 2, 4}, {2, 6, 3}, {5, 8, 7}};
    int B[3][3] = {{1, 4, 6}, {4, 3, 2}, {5, 1, 7}};

    // Declare a new matrix to store the sum of A and B
    int C[3][3];


    // Compute the sum of A and B and store the result in C
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the sum of A and B (matrix C)
    printf("Matrix C (sum of A and B):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
