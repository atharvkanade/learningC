#include <stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d",&no);

if (no >= 0)
{
   printf("Positive integer.");
}
else
{
    printf("Negative integer.");
}

    return 0;
}