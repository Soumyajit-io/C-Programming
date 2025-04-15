#include<stdio.h>
int square(int a){

    return(a*a);
}
int main(){
    int a, z;
    printf("Enter a Number: ");
    scanf("%d",&a);
    z=square(a);
    printf("The square of %d is %d ",a,z);
    return 0;
}