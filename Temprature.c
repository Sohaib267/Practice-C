#include<stdio.h>
int main()
{
    float F,C;
    printf("ENTER Fahrenheit :");
    scanf("%f",&F);
    float ce = (F-32)*5/9;
    printf("In %f Fahrenheit %f celsius is there. ",F,ce);

    printf("\nEnter Celsius");

    scanf("%f",&C);
    float fe = (C*(9/5)) +32;

    printf("In %f celsius %f Fahrenheit is there.",C , fe);
    return 0;

}