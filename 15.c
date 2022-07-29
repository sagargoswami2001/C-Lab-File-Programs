//WAP to create a function which will take two 2D Arrays as input and return the multiplication of the matrices.
#include<stdio.h>
void nul(int n1[10][10],int n2[10][10],int,int);
void main()
{
    int a[10][10],b[10][10];
    int i,j,r,c;
    printf("\nEnter the Number of Rows and Columns:\n");
    scanf("%d%d",&r,&c);
    printf("\nEnter the Elements of First Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter the Elements of Second Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    }
    nul(a,b,r,c);
}
void nul(int n1[10][10],int n2[10][10],int r,int c)
{
    int n3[10][10],i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            n3[i][j]=0;
            for(k=0;k<c;k++)
            {
                n3[i][j]=n3[i][j]+n1[i][k]*n2[k][j];
            }
        }
    }
    printf("\nMultiplication is:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",n3[i][j]);
        printf("\n");
    }
}