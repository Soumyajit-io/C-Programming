#include<stdio.h>
int main(){
    typedef struct Employee{
        int empID;
        char Name[25];
        int Salary;

    }Employee;
    
    Employee arr[3];
    int highestSalary=0;
    printf("Enter the student's information\n");


    for(int i=0;i<3;i++){//inputs
       
        printf("Enter EmpID \n");
        scanf("%d",&arr[i].empID);
    
        printf("Enter Name \n");
        scanf("%s",arr[i].Name);

        printf("Enter Salary \n");
        scanf("%d",&arr[i].Salary);
    }
    for(int i =1;i<3;i++){
    if(arr[i].Salary>arr[highestSalary].Salary)
        highestSalary = i;

    }


// printing
printf(" Employee with highest salary is \n");
        printf("EmpId   : %d\n", arr[highestSalary].empID);
        printf("Name    : %s\n", arr[highestSalary].Name);
        printf("Salary : %d\n\n", arr[highestSalary].Salary);


}