#include <stdio.h>

int main() {
    int arr[10];
    int i;

    // Input array elements
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements in reverse order
    printf("The array elements in reverse order are: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

}
