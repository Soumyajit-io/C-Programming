//create a structure tyoe "book " with name , price andnumber of pages S ITS ATTRIBUTES
#include<stdio.h>
#include<string.h>
int main (){
    struct book{
        char Name[50];
        float Price;
        int Pages;
    }book1;


    //book1.Name= "hello"; wrong
    strcpy(book1.Name,"bookxyz");
    book1.Pages= 4;
    book1.Price=45.00;
    printf("%s",book1.Name);
}