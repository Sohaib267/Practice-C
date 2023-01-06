// sort all elements of 2 D array row wise having 3 row and 3 column.
#include<stdio.h>
void main()
{
    int A[3][3],i,j,x,k;
    printf("Enter the 9 elements of the matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",A[i][j]);
        
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=(j+1);k<3;k++)
            {
                if(A[i][j]>A[i][k])
                {
                    x=A[i][j];
                    A[i][j]=A[i][k];
                    A[i][k]=x;
                
                }
            }
        }
    }
    printf("\nsorted matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
}