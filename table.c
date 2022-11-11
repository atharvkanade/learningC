#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter number to print table of :");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {

        printf("%d \n", n * i);
    }
    return 0;
}