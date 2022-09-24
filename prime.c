#include <stdio.h>
int main()
{
int num;
printf("Enter a number :" );
scanf("%d",&num);
int divisor;

for( int i = 1; i <= num; i++) { if(num % i == 0) divisor += 1; } 

 if(num == 0 || num == 1) 
 printf("%d is not prime", num); 
    else if(divisor > 2) 

        printf("%d is not prime", num);
else

printf("%d is prime", num);
 return 0;
}