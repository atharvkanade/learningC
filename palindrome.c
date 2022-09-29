#include <stdio.h>
int main() 
{
  int num;
  int remainder , reverse=0 ,number;

  printf("Enter a number :");
  scanf("%d",&num);
number = num;
  while (number != 0)
  {
   remainder = number % 10;
      reverse = reverse * 10 + remainder;
      number /= 10;
  }
  printf("Reverse number is :%d \n" ,reverse );
  if (reverse==num )
{ 
  printf("This is a Palindrome number");
}
else
{
 printf("This is  not a Palindrome number");
}

return 0 ;
}