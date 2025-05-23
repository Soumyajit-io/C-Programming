// find length using pointer
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    char* ptr = str;
    int length = 0;
    while(*ptr!='\0'){
        length++;
        ptr++;

    }
    printf("length = %d ",length);
}