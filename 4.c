//WAP a program to sort the array elements using Bubble Sort.
#include<stdio.h>
void main()
{
	int arr[100];
	int i,pass;
	int size,swap;
	
	printf("\nSize of Array:\n");
	scanf("%d",&size);
	
	printf("Enter Elements of Array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	for(pass=0; pass<(size-1); pass++)
	{
		for(i=0; i<(size-pass-1); i++)
		{
			if(arr[i]>arr[i+1])
			{
				swap=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=swap;
			}
		}
	}
	
	printf("\nSorted list in Ascending Order:\n");
	for(i=0; i<size; i++)
	{
	   printf("%d\n",arr[i]);
	}
}