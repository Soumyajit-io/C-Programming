#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];

    for(int i =0;i<n;i++){
        if(arr[i]>max) max= arr[i];

    }
    printf("Enter largest element is : %d",max);

    
}