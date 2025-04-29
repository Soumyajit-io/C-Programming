#include<stdio.h>

void printNum(int n){
    if(n>10) return;
    if(n%2==0) printf("%d ",n+1) ;
    if(n%2!=0) printf("%d ",n-1) ;
    return printNum(n+1);
}
int main(){
    int n=1;
    printNum(n);
     
}