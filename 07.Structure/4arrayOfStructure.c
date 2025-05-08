#include <stdio.h>

int main() {
    typedef struct pokemon {
        int hp;
        int speed;
        char Name[20];
    } pokemon;

    pokemon arr[3];
    for (int i = 0; i < 3; i++) { // input
        scanf("%s", arr[i].Name);
        scanf("%d", &arr[i].hp);
        scanf("%d", &arr[i].speed);
    }

    for (int i = 0; i < 3; i++) { // printing
        printf("Name: %s\n", arr[i].Name);
        printf("HP: %d\n", arr[i].hp);
        printf("Speed: %d\n\n", arr[i].speed);
    }

    return 0;
}
