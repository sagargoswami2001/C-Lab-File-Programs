//WAP to print the Total no of Odd and Even Numbers in an Array.
#include<stdio.h>
void main()
{
	int arr[100];
	int i,even,odd;
	int size;
	even=0;
	odd=0;
	
	printf("\nEnter Size of Array:\n");
	scanf("%d",&size);
	
	printf("\nEnter Element in Array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<size; i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	
	printf("\nAll Even Number : %d",even);
	printf("\nAll Odd Number : %d",odd);
}