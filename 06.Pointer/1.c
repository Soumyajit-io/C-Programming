#include<stdio.h>
int main(){
    int n,k=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int* ptr1 =arr;
    int new[n];
    int* ptr2 = new;
    int isdup;
    for(int i=0;i<n;i++){
        isdup =0;
        for(int j=0;j<k;j++){
            if(*(ptr1+i)==*(ptr2+j)){
                isdup=1;
                break;
            }
        }


        if(!isdup){
                *(ptr2+k)=*(ptr1+i);
                k++;
            }
    }


    for(int i=0;i<k;i++){//printing
            printf("%d",new[i]);
        }
        return 0;


}