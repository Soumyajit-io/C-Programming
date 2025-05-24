#include <stdio.h>
#include <string.h>

typedef struct books {
    char Name[40];
    int id;
    float Price;
    char Subject[20];
} books;

// Correct function declarations
void pricerange(int x, int y, books arr[]);
void findbook(char s[], books arr[]);

int main() {
    books arr[3];

    printf("Enter book details\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter book name:\n");
        scanf("%s", arr[i].Name);

        printf("Enter book id:\n");
        scanf("%d", &arr[i].id);

        printf("Enter book price:\n");
        scanf("%f", &arr[i].Price);

        printf("Enter subject:\n");
        scanf("%s", arr[i].Subject);
    }

    int x, y;
    printf("Enter your price range:\n");
    scanf("%d %d", &x, &y);
    pricerange(x, y, arr);

    char s[20];
    printf("Enter Subject:\n");
    scanf("%s", s);
    findbook(s, arr);

    return 0;
    
}

// Show books within price range
void pricerange(int x, int y, books arr[]) {
    for (int i = 0; i < 3; i++) {
        if (arr[i].Price >= x && arr[i].Price <= y) {
            printf("The book %s falls under the given price range.\n", arr[i].Name);
        }
    }
}

// Show books of a specific subject
void findbook(char s[], books arr[]) {
    for (int i = 0; i < 3; i++) {
        if (strcmp(s, arr[i].Subject) == 0) {
            printf("The book %s is from the given subject.\n", arr[i].Name);
        }
    }
}
