#include<stdio.h>
void main()
{
    int m,p=0,n=0,z=0;
    printf("Enter the size of the array: ");
    scanf("%d",&m);
    int A[m],i;
    printf("Enter the elements of the array: ");
    for(i=0;i<m;i++)
    {
    scanf("%d",&A[i]); 
    if(A[i]>0)
    p++;
    if(A[i]<0)
    {n++;}
    if(A[i]==0)
    z++;
    }
    printf("Array elements are:\n");
    for(i=0;i<m;i++)
    printf("%d\n",A[i]);
    printf("\nnumber of positive elements are: %d",p);
    printf("\nnumber of negative elements are: %d",n);
    printf("\nnumber of zero elements are: %d",z);
}