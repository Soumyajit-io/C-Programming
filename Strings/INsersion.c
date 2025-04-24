#include <stdio.h>
#include <string.h>

int main(){
    char a[30],b[30],c[30];
    int pos=0,i,j;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&pos);
    int la = strlen(a);
    int lb = strlen(b);
    int lc = la+lb;
    for( i = 0;i<pos;i++){
        c[i]=a[i];
    }

    for (j = 0; j < lb; j++ ) {
        c[i] = b[j];
        i++;
    }
    for (j = pos; j < la; j++) {
        c[i] = a[j];
        i++;
    }
    c[i] = '\0';
    printf("String after insertion is:\n%s\n", c);

}