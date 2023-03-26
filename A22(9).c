#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    void *ptr;

    // Read the size of the memory to be allocated from the user
    printf("Enter the size of the memory to be allocated (in bytes): ");
    scanf("%d", &n);

    // Allocate memory dynamically using malloc() function
    ptr = malloc(n);

    // Check if the memory allocation is successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
    } else {
        printf("Memory allocation successful.\n");

        // Use the allocated memory here

        // Free the allocated memory
        free(ptr);
    }

    return 0;
}
