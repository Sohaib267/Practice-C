#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
  printf("Enter the size of an array\n");
  scanf("%d",&n);
  int arr[n];

  printf("Enter the Element :\n");
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("printing the elements%d\n");
  for(int j=0;j<n;j++)
  {
    printf("%d",arr[j]);
  }
  return 0;
}