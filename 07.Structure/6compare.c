#include<stdio.h>
#include<stdbool.h>
int main() {
    typedef struct pokemon {
        int hp;
        int speed;
    } pokemon;
    pokemon a,b;
    a.hp=100;
    a.speed=50;

    b.hp=100;
    b.speed=50;
    bool flag = true;
    if(a.hp!=b.hp) flag = false;
    if(a.speed!=b.speed) flag = false;

    if(flag == true) printf("same");
    else printf("diff");
}