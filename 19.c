//WAP to compare two strings and concatenate the same.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("\nEnter First String : ");
    scanf("%s",& str1);
    printf("Enter Second String : ");
    scanf("%s",& str2);
    if(strcmp(str1,str2)==0)
    printf("\nBoth Strings Are Same.\n");
    else
    printf("\nStrings Are Not Same.\n");
    strcat(str1,str2);
    printf("\nConcatenated String is : %s",str1);
}