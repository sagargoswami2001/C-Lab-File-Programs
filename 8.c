//WAP to implement Binary Search.
#include<stdio.h>
void main()
{
	int arr[100];
	int start,end,mid;
	int i,size,searchno;
	int find=0;
	
	printf("\nEnter Size of Array: ");
	scanf("%d",&size);
	
	printf("Enter %d Elements in Ascending Order:\n",size);
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter Search Number: ");
	scanf("%d",&searchno);
	
    start=0;
    end=size-1;
    
    while(start<=end)
    {
    	mid=(start+end)/2;
    	if(arr[mid]==searchno)
    	{
    		find++;
    		break;
    	}
    	else if(searchno>arr[mid])
    	{
    		start=mid+1;
    	}
    	else
    	{
    		end=mid-1;
    	}
    }
    
    if(find==1)
    {
    	printf("%d is Present.\n",searchno);
    }
    else
    {
    	printf("%d is Not Present.",searchno);
    }
}