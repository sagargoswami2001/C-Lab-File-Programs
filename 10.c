//WAP to enter the value of two matrixes and calculate multiplication of 2 matrixes using 2-D array.
#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
printf("\nEnter the Number of Row: ");    
scanf("%d",&r);    
printf("Enter the Number of Column: ");    
scanf("%d",&c);    
printf("\nEnter the First Matrix Element:\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("\nEnter the Second Matrix Element:\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}  
printf("\nMultiply of the Matrix:\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}