//WAP to create an array of structure(student) to enter and display five student details.
#include<stdio.h>
struct student
{
    char student_name[50];
    int marks;
    int age;
    int rollno;
    char course[20];
};

int main()
{
    int i;
    struct student S[5];

    for(i=0; i<5; i++)
    {
        printf("\nEnter the Student Name : ");
        scanf("%s",&S[i].student_name);

        printf("Enter the Student Roll No. : ");
        scanf("%d",&S[i].rollno);

        printf("Enter Subject Marks : ");
        scanf("%d",&S[i].marks);

        printf("Enter Age : ");
        scanf("%d",&S[i].age);

        printf("Enter Course : ");
        scanf("%s",&S[i].course);
    }

    printf("\nStudent Details :-\n ");
    for(i=0; i<5; i++)
    {
        printf("\nStudent Name : %s", S[i].student_name);
        printf("\nMarks : %d", S[i].marks);
        printf("\nAge : %d", S[i].age);
        printf("\nRoll No. : %d", S[i].rollno);
        printf("\nCourse : %s", S[i].course);
        printf("\n");
    }
    return 0;
}