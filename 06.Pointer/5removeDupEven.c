#include <stdio.h>

int main() {
    int arr[100], n, i, j = 0;
    int *ptr;

    // Input the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    ptr = arr; // Pointer points to the first element of array
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Remove elements at even positions (i.e., indices 1, 3, 5...)
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            *(ptr + j) = *(ptr + i); // Keep only elements at even indices
            j++;
        }
    }

    // Display the final array
    printf("Array after removing elements at even positions:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
