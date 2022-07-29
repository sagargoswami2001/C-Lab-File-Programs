//WAP to create function which will swap two values using call be reference.
#include <stdio.h>
void swap(int*, int*);
int main()
{
 int x, y;
    printf("\nEnter the Value of X and Y:\n");
    scanf("%d%d",&x,&y);
    printf("\nBefore Swapping\nX : %d\nY : %d\n", x, y);
 
    swap(&x, &y); 
 
    printf("\nAfter Swapping\nX : %d\nY : %d\n", x, y);
 
    return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
