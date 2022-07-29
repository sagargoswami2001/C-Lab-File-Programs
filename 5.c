//WAP a program to sort the array elements using Selection Sort.
#include <stdio.h>			
void main()			
{			
    int i, j, ab, n, a[30];			
    int min=0;			
			
	printf("\nSize of Array:\n");			
    scanf("%d", &n);			
			
    printf("\nEnter Elements of Array:\n");			
    for (i = 0; i < n; ++i)			
	scanf("%d", &a[i]);		
			
	for (j = 0; j< n; ++j)			
    {			
        min=j;			
			
	for (i = j + 1; i < n; ++i)		
	{		
	    if (a[i]<a[min])		
	{		
	        min=i;		
	}		
	}		
			
	ab =  a[j];		
	a[j] = a[min];		
	a[min] = ab;		
	}		
    			
    printf("\nSorted List in Ascending Order:\n");			
    for (i = 0; i < n; ++i)			
	printf("%d\n", a[i]);		
}