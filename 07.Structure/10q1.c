#include<stdio.h>
int main(){
    typedef struct student{
        char Name[25];
        int age;
        int Total_Marks;

    }student;
    student a;
    printf("Enter the student's information\n");
    printf("Enter Name \n");
    scanf("%s",a.Name);
    
    printf("Enter age \n");
    scanf("%d",&a.age);

    printf("Enter Total Marks \n");
    scanf("%d",&a.Total_Marks);

    printf("---STUDENTS INFORMATION---\n");
    printf("Name        :%s\n",a.Name);
    printf("Age         :%d\n",a.age);
    printf("Total Marks :%d\n",a.Total_Marks);
}