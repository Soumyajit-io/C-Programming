#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 elements");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int s=arr[0];
    int b=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>b){
            b=arr[i];
        }
        if(arr[i]<s){
            s=arr[i];
        }
    }
    printf("The range is between %d and %d",s,b);
}