/*
#include<stdio.h>

int SumofEvenandOdd(int range,int *e,int *o)
{
    int i = 1;
    *e = 0;
    *o= 0;
    while(i<=range)
    {
        if(i%2==0)
        {
            *e = *e + i;
        }
        else{
            *o = *o + i;
        }
        i++;
    }
}
int main()
{
    int n,even,odd;
    printf("Enter the range :");
    scanf("%d",&n);
    SumofEvenandOdd(n,&even,&odd);
    printf("Sum of even is :%d \nand Odd is :%d",even,odd);

    return 0;
} */
#include <stdio.h>
void main()
{
int i, num, odd_sum = 0, even_sum = 0;
printf("Enter the value of num\n");
scanf("%d", &num);
for (i = 1; i <= num; i++)
{
if (i % 2 == 0)
even_sum = even_sum + i;
else
odd_sum = odd_sum + i;
}
printf("Sum of all odd numbers = %d\n", odd_sum);
printf("Sum of all even numbers = %d\n", even_sum);
}
