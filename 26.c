/*WAP to open a text file and copy it to in a new text file with all lower-case letters change
to upper case and all other characters unchanged.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
      FILE *fp1, *fp2;
      char ch;
      fp1 = fopen("First.txt", "r");
      if (fp1 == NULL)
      {
            puts("File Does Not Exist..");
            exit(1);
      }
      fp2 = fopen("Second.txt", "w");
      if (fp2 == NULL)
      {
            puts("File Does Not Exist..");
            fclose(fp1);
            exit(1);
      }
      while((ch=fgetc(fp1))!=EOF)
      {
            ch = toupper(ch);
            fputc(ch,fp2);
      }
      printf("\nFile Successfully Copied.");
      return 0;
}