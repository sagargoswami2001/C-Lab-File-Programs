//WAP to implement functions of <String.h> header file.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    int length;
    printf("\nEnter the First String : ");
    scanf("%s",& str1);
    printf("Enter the Second String : ");
    scanf("%s",& str2);
    length = strlen(str1);
    strlwr(str1);
    printf("\nLength of First String is: %d",length);
    printf("\nFirst String in Lower Case is: %s",str1);
    if(strcmp(str1,str2)==0)
    printf("\nBoth String Are Same.\n");
    else
    printf("\nString Are Not Same.\n");
    strcat(str1,str2);
    printf("\nConcatenated String is : %s",str1);
}