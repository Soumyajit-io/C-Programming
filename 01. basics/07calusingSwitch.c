#include<stdio.h>
int main(){
    int a,b,c,ch;
    scanf("%d %d",&a,&b);
    while(1){
        printf("menu");
        printf("1.add\n2.sub\n3.mul\n4.div\n5.modulus\n6.exit");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                c=a+b;
                printf("Additon is : %d\n",c);
                break;
            case 2: c=a-b;
                printf("Subtraction is : %d\n",c);
                break;
            case 3: c=a*b;
                printf("Multiplication is : %d\n",c);
                break;
            case 4: c=a/b;
                printf("Division is : %d\n",c);
                break;

            case 5: c=a%b;
                printf("Modulus is : %d\n",c);
                break;

            case 6:
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}