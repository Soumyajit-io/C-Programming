#include<stdio.h>
int main (){
    struct pokemon{//user defined data type
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    pikachu.hp =50;
    pikachu.attack = 240;
    pikachu.speed = 100;
    scanf("%d",&pikachu.attack);
    printf("%d",pikachu.attack);
}