#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter number of rows :");
    scanf("%d", &r);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}