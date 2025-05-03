//prinnt the middle element of an array using pointer
#include <stdio.h>

void middd(int* arr, int n) {
    if (n % 2 == 0) {
        int* mid = arr +  n / 2;
        printf("The middle elements are %d and %d\n", arr[*mid - 1], arr[*mid]);
    } 
    else {
        
        int* mid =arr + n / 2;
        printf("The middle element is %d\n", *mid);
    }
}

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %dth element of the array: ", i);
        scanf("%d", &arr[i]);
    }

    middd(arr, n);
    return 0;
}
