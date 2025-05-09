#include<stdio.h>
int main() {
    typedef struct pokemon {
        int hp;
        int speed;
    } pokemon;
    pokemon a,b,c;;
    a.hp=100;
    a.speed=50;

// copy  
    // b.hp=a.hp;//copy
    // b.speed=a.speed;
    b=a;//one line
    printf("%d",b.hp);
}
