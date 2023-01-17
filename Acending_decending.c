//program to print ascending and descending order in array
#include<stdio.h>
void main()
{
    int m;
    printf("Enter the size of the Array: ");
    scanf("%d",&m);
    int A[m],i,j,x;
    for(i=1;i<=m;i++)
    {
    printf("\nEnter the value of %d: ",i);
    scanf("%d",&A[i]);
    }
    printf("\nOriginal:");
    for(i=1;i<=m;i++)
    printf(" %d ",A[i]);
    printf("\nAscending order: ");
    for(i=1;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        if(A[i]>A[j])
        {
        x=A[j];
        A[j]=A[i];
        A[i]=x;
        }
    }
    for(i=1;i<=m;i++)
    printf("%d ",A[i]);
     printf("\nDescending order: ");
    for(i=1;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        if(A[i]<A[j])
        {
        x=A[j];
        A[j]=A[i];
        A[i]=x;
        }
    }
    for(i=1;i<=m;i++)
    printf("%d ",A[i]);
}