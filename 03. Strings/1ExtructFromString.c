#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    int x,n;
    printf("Enter target : ");
    scanf("%d",&x);
    printf("Enter number of charecter : ");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        printf("%c",str[x+i]);
    }
    return 0;
}