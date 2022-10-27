#include <stdio.h> 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
   int count = 0; 
   while(n>0)
   { count++; n = n/10; }
    
    printf("There are %d digits in given number",count);
    
    return 0;
}