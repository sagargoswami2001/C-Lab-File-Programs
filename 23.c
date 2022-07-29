//WAP to create employee details using typedef.
#include <stdio.h>
typedef struct
{
    char name[30];
    int id;
    int salary;
    char mob[14];
} Employee;
Employee e;
void main()
{
    printf("\nEnter Employee Details:\n");
    printf("Name : ");
    gets(e.name);
    //scanf("%s", &e.name);
    printf("Id : ");
    scanf("%d", &e.id);
    printf("Salary : ");
    scanf("%d", &e.salary);
    printf("Mobile Number : ");
    scanf("%s", &e.mob);
    printf("-------------- Employees Details --------------\n");
    printf("Name : %s\n", e.name);
    printf("Id : %d\n", e.id);
    printf("Salary : %d\n", e.salary);
    printf("Mobile Number : %s\n", e.mob);
}