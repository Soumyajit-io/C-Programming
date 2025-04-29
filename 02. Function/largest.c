#include<stdio.h>
int largest(int a, int b, int c){
    int max;
    if(a>b){
        if(a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else{
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }
    return max;
}
int main(){
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
    scanf("%d",&c);
    int large = largest(a,b,c);
    printf( "The largest between %d, %d and %d is %d",a,b,c,large);
    
}