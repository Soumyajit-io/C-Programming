#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter 10 elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p=0,ne=0,z=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) z++;
        if(arr[i]>0) p++;
        if(arr[i]<0) ne++;
    }
    printf("The number of zeroes , positive and negative numbers are %d %d %d",z,p,ne);
}