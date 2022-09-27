#include <stdio.h>
int main()
{
    int num;
    int reverse= 0 , reminder;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num != 0)
    {   
       reminder = num % 10;
      reverse = reverse * 10 + reminder;
      num /= 10;
    }
    printf("Reverse  of digit is :%d", reverse);
    return 0;
}