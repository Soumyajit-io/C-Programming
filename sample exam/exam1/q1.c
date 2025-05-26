#include<stdio.h>
int fact(int n){
    int i=1,x=1;
    while(i<=n){
        x*=i;
        i++;
    }
    return x;
}
int main(){
    int sum=0;
    for(int i=1;i<=9;i++){
        sum+=fact(i)*fact(i+1);
        
    }
    printf("%d",sum);
}