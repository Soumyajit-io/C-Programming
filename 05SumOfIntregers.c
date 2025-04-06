#include <stdio.h>
int main (){
    int a,b=0,sum=0;
    printf("Enter the Number ");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        sum=sum+b;
        a/=10;
    }
    printf("the Sum is %d",sum);
}