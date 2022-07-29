//WAP to calculate maximum and minimum in the array using pointer.
#include <stdio.h>
int main()
{
    int a[10],*p,max=-32768,min=32767,i;
    printf("\nEnter 10 Elements:\n");

    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    p=a;

    for(i=0;i<10;i++)
    {
        if(*p>max)
            max=*p;

        if(*p<min)
            min=*p;

        p++;        
    }
    printf("\nMaximum: %d",max);
    printf("\nMinimum: %d",min);
    return 0;
}
