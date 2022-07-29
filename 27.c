//WAP to explain command line argument.
#include <stdio.h> 
int main( int argc, char *argv [] )
{
    printf("\nName of my Program: %s\t", argv[0]);

    if( argc == 2 )
    {
        printf("\nValue Given by User is: %s\t", argv[1]);
    }
    else if( argc > 2 )
    {
        printf("\nMany Values Given by Users.\n");
    }
    else
    {
        printf("\nSingle Value Expected.\n");
    }
}