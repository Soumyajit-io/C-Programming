//wap to add two numbers using pointer
#include<stdio.h>
int main(){
    int a =5, b=5;
    int* ptr1 = &a;
    int* ptr2 = &b;
    printf("%d",*ptr1 + *ptr2);
}