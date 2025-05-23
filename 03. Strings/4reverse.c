#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    printf("Enter the string: ");
    scanf(" %[^\n]s", str1);  // Leading space helps avoid leftover '\n'

    char* ptr1 = str1;
    char* ptr2 = str1 + strlen(str1) - 1;

    while (ptr1 < ptr2) {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }

    printf("Reversed string: %s\n", str1);
    return 0;
}
