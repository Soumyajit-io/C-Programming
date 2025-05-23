#include <stdio.h>

int main() {
    int arr[100], unique[100];
    int n, i, j, k = 0, isDuplicate;
    int *ptrArr, *ptrUnique;

    // Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptrArr = arr;         // Pointer to original array
    ptrUnique = unique;   // Pointer to unique array

    // Remove duplicates
    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        for (j = 0; j < k; j++) {
            if (*(ptrArr + i) == *(ptrUnique + j)) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            *(ptrUnique + k) = *(ptrArr + i);
            k++;
        }
    }

    // Output unique array
    printf("Array after removing duplicates:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", *(ptrUnique + i));
    }
    printf("\n");

    return 0;
}