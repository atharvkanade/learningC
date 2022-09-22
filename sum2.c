#include <stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d",&no);
 
 int sum = no * (no + 1 ) / 2;
 printf("sum is : %d", sum);
 

    return 0;
}