#include<stdio.h>
#include<string.h>
int main (){
    typedef struct book{
        char Name[50];
        float Price;
        int Pages;
    }book;


    book a;
    a.Pages = 50;
    printf("%d",a.Pages);
}
