#include <stdio.h>
int main()
{
    int a ;
    printf("Enter  a : ");
     scanf("%d",&a);
  int b ;
     printf("Enter  b: ");
    scanf("%d",&b);

       int sum = 0; 

    for (int i = a; i <= b ; i++)
       sum = sum + i ;
    {    
        printf(" sum is : %d ", sum); 
    }
    return 0;
}