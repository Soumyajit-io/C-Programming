//wap to remove duplicate and add new it to new array using pointer
#include<stdio.h>
int main (){
    int size;
    int* ptrDup;
    int* ptruni;

    // input
    printf("Enter the length of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the %dth element of the array: ", i);
        scanf("%d", &arr[i]);
    }


    int arr2[size];
    ptrDup = arr;
    ptruni = arr2;

    //Duplicate
    int k = 0; // Number of unique elements

for (int i = 0; i < size; i++) {
    int isDuplicate = 0;
    
    for (int j = 0; j < k; j++) {
        if (*(ptrDup + i) == *(ptruni + j)) {
            isDuplicate = 1;
            break;
        }
    }

    if (!isDuplicate) {
        *(ptruni + k) = *(ptrDup + i);
        k++;
    }
}

    for (int i = 0; i < size; i++) {
        printf("%d", arr2[i]);
        
    }
}