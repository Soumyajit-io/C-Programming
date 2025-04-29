#include <stdio.h>
int swap(int* a , int* b){
    int temp = *a;
    *a=*b;
    *b=temp;   
}
int main (){
    int a , b ;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the Second number: \n");
    scanf("%d", &b);
    swap(&a,&b);
    printf("After swapping the value of first number is : %d\n",a);
    printf("After swapping the value of Second number is : %d\n",b); 
}
