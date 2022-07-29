//To define a macro PRINT _ VALUE that can be used to print values of any type.
#include <stdio.h>
#define PRINT_VALUE(x) printf("Value: %d",x);
void main()
{
    int x;
    printf("\nEnter Value: ");
    scanf("%d", &x);
    PRINT_VALUE(x)
}