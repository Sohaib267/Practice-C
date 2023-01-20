#include<stdio.h>
int main()
{
    int bonus,cy,yoj,yos;
    printf("Enter the current year and year of joyning");
    scanf("%d%d", &cy,&yoj);
    yos=cy-yoj;
    if(yos>3)
    {
        bonus = 2500;
        printf("Bonus=Rs%d\n",bonus);

    }
    return 0;
}