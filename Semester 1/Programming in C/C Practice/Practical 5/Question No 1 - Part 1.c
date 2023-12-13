#include <stdio.h>

int main() {
    int arr[10];
    int i, min;

    // Input array elements
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the minimum value
    min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the minimum value
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}

