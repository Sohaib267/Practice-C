
#include<stdio.h>
int main()
{

    int num =5,a,s;
    for(a=1; a<=num; a++)
    {
     for(s=1; s<=num; a++)
     {
        if ((a==2 || a==3 || a==4) && (s==1))
        printf("");
        else if((a==3) && (s==2))
        printf(" ");
        else if((a==2 || a==4 ||) && (s==3)  )
        printf(" ");
        else if((a==2 || a==3 || a==4 ) && (s==4 || s==5))
        printf(" ");
        else
        printf("*");


     } 
     printf("\n");

    }
    getch ();
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{

 int num=5,r,c;
 for(r=1; r<=num; r++)
 {
  for(c=1; c<=num; c++)
  {
    if( (c==2 || c==3 || c==4) && (r==1) )
      printf(" ");
    else if( (c==3) && (r==2) )
      printf(" ");
    else if( (c==2 || c==4) && (r==3) )
      printf(" ");
    else if( (c==2 || c==3 || c==4 ) && (r==4 || r==5) )
       printf(" ");
    else
       printf("*");
   }
   printf("\n");
 }
 getch();
 return 0;
}
*/





