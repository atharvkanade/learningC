#include <stdio.h>

int main()
{
    int i ,j ,r;
    
    printf("Enter no of rows : ");
    scanf("%d",&r);
    
    for(i=0;i<r;i++)                    
   {
      if(i<=(r/2))                
         {
            for(j=0;j<=i;j++)    
               {
                  printf("*");    
               }
         }
      else                        
         {
            for(j=i;j<r;j++)     
               {
                  printf("*");    
               }
         }

      printf("\n");     
   }
}
    
