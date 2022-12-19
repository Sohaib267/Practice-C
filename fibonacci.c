#include<stdio.h>

int main() {

int n, a=0,b=1,c,i;

printf("\n Enter input limit :");

scanf("%d",&n);

if(n==1)

printf("\n %d",a);

else if(n==2)

printf("\n%d\t%d",a,b);

else

{

printf("\n%d\t%d",a,b);

for(i=3;i<=n;i++)

{

c=a+b;

printf("\t %d",c);

a=b;

b=c;

}

}

return 0;

}

/*

#include <stdio.h>

int fibo(int r)
{
    if (r == 0 || r == 1)
    {
        return r;
    }
    else
    {
        return fibo(r - 1) + fibo(r - 2);
    }
}
int main()
{
    int n;
    printf("Enter the range :");
    scanf("%d", &n);
    printf("Fibonacci Series is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibo(i));
    }

    return 0;
}
*/