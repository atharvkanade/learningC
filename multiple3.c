#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if (n % 3 == 0)
    {
        printf("The number is multiple of three ");
    }

    else
    {
        printf("The number is not a multiple of three ");
    }

    return 0;
}