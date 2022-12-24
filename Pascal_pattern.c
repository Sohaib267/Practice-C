#include<stdio.h> 
 void main() 
 { 
     int rows,i,j,space,a=1; 
  printf("Enter the row for pascal triangle: "); 
  scanf("%d",&rows);                                 
  i=0; 
  while(i<rows) 
  
  {                                                 
    space=1; 
    while( space<=rows-i){ 
    printf("  ");
   space++; 
    } 
 j=0; 
    while( j<=i) 
    {                                               
    if(j==0 || i==0) 
     a=1; 
    else 
      a=a*(i-j+1)/j; 
      printf("%4d",a);                                
       j++; 
    } 
    printf("\n");                                   
 i++; 
 } 
 }