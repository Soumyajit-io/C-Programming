#include <stdio.h>


int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %dth element of the array: ", i);
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = n-1;
    int target;
    printf("Enter target");
    scanf("%d", &target);

    if(arr[i]+arr[j]==target){
        printf("%d + %d = %d", arr[i],arr[j],target);
    }
    else if(arr[i]+arr[j]>target){
        j--;
    }
    else if(arr[i]+arr[j]>target){
        i--;
    }
}
