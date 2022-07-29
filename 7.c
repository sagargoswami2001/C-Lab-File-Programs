//WAP to implement Linear Search.
#include <stdio.h>
void main()
{  
    int num;
    int i,  keynum, found = 0;
 
    printf("\nEnter the Number of Elements: ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the Elements One by One:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("\nEnter the Element to be Searched: ");
    scanf("%d", &keynum);
    
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is Present in the Array at Position: %d",i+1);
    else
        printf("Element is Not Present in the Array.\n");
}