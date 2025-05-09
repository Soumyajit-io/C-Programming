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
    p.hp = 60;
    fun(p);
}