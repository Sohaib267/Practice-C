//program to add n no. using pointer
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the total no. of elements to be added:");
    scanf("%d",&n);
    int arr[n];
    int *p[n];
    printf("Enter the elements to be added:");
    for(i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++)
        {
           p[i]=&arr[i];
           sum+=*p[i];
        }
    printf("The sum of all entered elements=%d",sum);
    return 0;
}