#include <stdio.h>
int main()
{
int num;
printf("Enter a number :" );
scanf("%d",&num);
int count;

for( int i = 1; i <= num; i++) { if(num % i == 0) count += 1; } 

 if(num == 0 || num == 1) 
 printf("%d is not prime", num); 
    else if(count > 2) 

        printf("%d is not prime", num);
else

printf("%d is prime", num);
 return 0;
}