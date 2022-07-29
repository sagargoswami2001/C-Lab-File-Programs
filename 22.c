//WAP to enter a string and count the number of vowels and consonant.
#include<stdio.h>
void main()
{
    char str[20];
    int i,vowel=0,consonant=0;
    printf("\nEnter a String : ");
    gets(str);
    for(i=0;i<str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||
            str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            vowel++;
            else
            consonant++;
        }
    }
    printf("\nTotal Number of Vowels Are: %d",vowel);
    printf("\nTotal Number of Consonant Are: %d",consonant);
}