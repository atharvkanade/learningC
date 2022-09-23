#include <stdio.h>
int main()
{
    int a ;
    printf("Enter  a : ");
     scanf("%d",&a);
  int b ;
     printf("Enter  b : ");
    scanf("%d",&b);

    if (a > b)
    {
      printf("a is greater than b ");
    }
    else if (a==b)
    {
        printf(" both are equl  ");
    }
     
     else
     {
        printf(" b is greater than a ");
     }
    return 0;
}