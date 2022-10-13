#include <stdio.h>
#include <math.h>

int main()
{
    int num, fact = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error ");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d is : %d", num, fact);
    }
    
    return 0;
}
