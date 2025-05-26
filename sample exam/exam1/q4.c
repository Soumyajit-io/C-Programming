#include<stdio.h>
int main(){
   int x,y,z;
    printf("Enter your numbers");
    scanf("%d %d %d",&x,&y,&z);
    int a =x*x;
    int b=y*y;
    int c=z*z;
    if(a+b==c || b+c==a || c+a==b)
    printf("Pythogorean triplet");
    else printf("Not Pythogorean triplet");
}