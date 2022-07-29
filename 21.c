//WAP to enter a string and count the character of the string.
#include<stdio.h>
void main()
{
    char str[20];
    int i,count=0;
    printf("\nEnter String : ");
    gets(str);

    for(i=0;i<str[i];i++)
    {
        count++;
    }
    printf("Total Number of Characters Are: %d",count);
}