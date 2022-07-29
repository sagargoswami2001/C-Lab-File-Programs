//WAP to perform addition and subtraction of two matrixes.
#include<stdio.h>
void main()
{
	int arr1[100],arr2[100],sum[100],sub[100];
	int i;
	int size;
	
	printf("\nEnter Size of Array:\n");
	scanf("%d",&size);
	
	printf("Enter %d Element in 1st Array:\n",size);
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr1[i]);
    }
     
	printf("Enter %d Element in 2nd Array:\n",size);
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr2[i]);
    }
      
    for(i=0; i<size; i++)
    {
      sum[i]=arr1[i]+arr2[i];
      sub[i]=arr1[i]-arr2[i];
    }
    
    printf("\nSum of Array:\n");
	for(i=0; i<size; i++)
	{
		printf("%d\n",sum[i]);
    }
     
    printf("Subtarction of Array:\n");
	for(i=0; i<size; i++)
	{
		printf("%d\n",sub[i]);
    }   
}
