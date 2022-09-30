#include <stdio.h>
#include<math.h>

int order(int x)
{
  int length = 0;
  while (x)
  {
   length++;
   x = x / 10;
  }
  return length;
  }
int sumArmstrong( int number , int order)
{
if (number == 0)
return 0;
int digit = number % 10 ;
return pow(digit,order) + sumArmstrong(number/10,order);
}

int main ()
{
  int num,length;
  printf("Enter a number :");
  scanf("%d",&num);

  length =order(num) ;

  if (num == sumArmstrong(num,length))
  {
printf("This is a Armstrong number ");
  }
  else
  {
    printf("This is a not Armstrong number" );
  }
  return 0;
  }
