#include<stdio.h>
void main()
{
    int p,q;
    printf("enter the no- to which prime no-to be found");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        q=0;
        for(int z=2;z<=i/2;z++)
        {
            if(i%z==0)
            {
                q++;
                break;
            }
        }
        if(q==0 && i!=1)
        {
            printf("%d\t",i);
        }
    }

}