// add elements of array using pointer
#include<stdio.h>
int summ(int* arr,int n){
    int sum =0;
    for (int i = 0; i < n; i++) {
        sum += *(arr +i);
    }
    return sum;
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

    
    printf("The sum is %d",summ(arr,n));
}