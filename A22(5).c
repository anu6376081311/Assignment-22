#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
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
        sum += arr[i];
    }

    // Print the sum of all elements
    printf("Sum of all elements: %d\n", sum);

    // Print the inputted array elements
    printf("Array elements:");
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
