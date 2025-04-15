#include<stdio.h>
int add(int a , int b){

    return(a+b);
}
int main(){
    int a,b, addition;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    addition=add(a,b);
    printf("The addition of %d and %d is %d ",a,b,addition);
}