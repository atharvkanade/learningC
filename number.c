#include<stdio.h>
int main()
{
int i,j,k,r,n;  

printf("Enter number : " );
scanf("%d,",&n);
printf("Enter the number of rows :\n");     
scanf("%d",&r);     
for(i=0;i<r;i++)    
   {
     for(k=r;k>i+1;k--)     
       {
          printf(" ");   
       }
     for(j=0;j<=i*2;j++)     
       {
          printf("%d",n);     
       } 
    printf("\n");    
   }
}