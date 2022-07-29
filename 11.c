//WAP to print the transpose of a 2-D Array.
#include <stdio.h>
void main()
{
  int arr1[50][50],brr1[50][50],i,j,r,c;

       printf("\nInput the Rows and Columns of the Matrix :\n");
       scanf("%d %d",&r,&c);

       printf("\nInput Elements in the First Matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("Element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }

 	 printf("\nThe Matrix is :");
  		for(i=0;i<r;i++)
    		{
      		printf("\n");
      		for(j=0;j<c;j++)
          	printf("%d\t",arr1[i][j]);
    		}

  for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
            {
                   brr1[j][i]=arr1[i][j];
            }
      }

      printf("\n\nThe Transpose of a Matrix is : ");
      for(i=0;i<c;i++){
      printf("\n");
      for(j=0;j<r;j++){
           printf("%d\t",brr1[i][j]);
      }
  }
      printf("\n\n");
}