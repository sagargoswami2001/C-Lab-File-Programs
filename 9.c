//WAP to Insert an element at a specific position in an array and rest of the array vales must be shifted to next array positions.
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    printf("\nEnter Size of the Array: ");
    scanf("%d", &size);

    printf("Enter Elements in Array:-\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter Element to Insert: ");
    scanf("%d", &num);
    printf("Enter the Element Position: ");
    scanf("%d", &pos);

    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid Position! Please Enter Position Between 1 to %d", size);
    }
    else
    {
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = num;
        size++; 

        printf("\nArray Elements After Insertion: ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}