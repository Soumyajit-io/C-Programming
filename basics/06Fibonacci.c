#include<stdio.h>
int main(){// 0 1 1 2 3 5 8 13
    int a=0, b=1, c,n,i=1;
    printf("Enter the last term");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}