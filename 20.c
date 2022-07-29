//WAP to enter your name and display the ASCII values against your name.
#include<stdio.h>
void main()
{
    char str[20];
    int i;
    printf("\nEnter Your Name : ");
    //scanf("%s",&str);
    gets(str);
    for(i=0;i<str[i];i++)
    {
        printf("\nThe ASCII Value of %c is: %d\t",str[i],str[i]);
    }
}