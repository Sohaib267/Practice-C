//program to add two no. using pointer
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    int *p=&a;
    int *q=&b;
    printf("sum of two no=%d",*p+*q);
    return 0;
}