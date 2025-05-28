#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,ch,fact=1,i=1;
    bool flag = true;
        
    printf("Enter the numbers");
    scanf("%d",&a);

    while(1){
        
        printf("--Menu--\n");
        printf("1. calculate Factorial\n2. Check is prime or not\n3.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            while(i<=a){
                    fact*=i;
                    i++;
                }
            printf("The factorial is %d\n",fact);
            break;

            case 2:
            
            for(int j=2;j<=a-1;j++){
                if(a%j==0){ flag = false;
                break;}
            }
            if(a<=1) printf("not prime\n");
            if(flag==true) printf("Prime\n");
            if(flag==false) printf("Not prime\n");
            break;
            
            case 3:
            exit(0);
            default:printf("Invalid choice");
            
        }

    }
}