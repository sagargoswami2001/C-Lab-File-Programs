//WAP to concatenate two integer arrays in to a single array.
#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("\nEnter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements:\n");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements:\n");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe New Array After Merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    return 0;
}