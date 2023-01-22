#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,mod;
    printf("Enter two variable\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;

    div=a/b;
    mod=a%b;
    printf("Addition of two number=:%d\n",sum);
    printf("Subtraction of two number=:%d\n",sub);
    printf("multipication of two numnber=%d\n",mul);
    printf("division of two nuber =%d\n",div);
    printf("modulus of two number =:%d\n",mod);
    return 0;
}