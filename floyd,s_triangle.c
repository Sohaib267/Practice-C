#include<stdio.h> 
int main() 
 { 
   int i,j,n,a=1; 
   printf("\n enter the number of rows"); 
   scanf("%d",&n); 
   for(i=0; i<n; i++) 
   { 
   for(j=0; j<i+1; j++) 
   { 
   printf("%d ",a); 
   a++; 
   } 
   printf("\n"); 
   } 
   return 0; 
 } 
