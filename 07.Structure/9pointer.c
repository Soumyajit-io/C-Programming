#include<stdio.h>
#include<stdbool.h>
typedef struct pokemon {//global declaration
    int hp;
    int speed;
} pokemon;


void fun(pokemon p){//this is pass by value
    printf("%d",p.hp);
}
int main() {
    pokemon p;
    p.hp = 53;
    p.speed=86;


    pokemon* ptr = &p;
    printf("%p",ptr);
    //(*ptr).hp = 45;//accessing the value using pointer
    ptr->hp=45;// {         (*ptr).something  = ptr=>something          }
    printf("%d",p.hp);
}