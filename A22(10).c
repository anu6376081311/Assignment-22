#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, max, min;
    int *arr;

    // Read the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int*) malloc(n * sizeof(int));

    // Read the array elements from the user
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest and smallest elements
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the largest and smallest elements
    printf("The largest element is: %d\n", max);
    printf("The smallest element is: %d\n", min);

    // Free the allocated memory
    free(arr);

    return 0;
}
