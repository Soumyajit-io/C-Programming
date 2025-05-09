#include<stdio.h>
#include<stdbool.h>
int main() {
    typedef struct pokemon {
        int hp;
        int speed;
    } pokemon;

    typedef struct legendarypokemon {
        int ability;
        pokemon normal;
    } legendarypokemon;
    

    legendarypokemon mewtwo;

    mewtwo.ability = 50;
    mewtwo.normal.hp=100;
    mewtwo.normal.speed=100;

}