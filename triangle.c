#include <stdio.h>

int main()
{
    int i, r, j;
    printf("Enter number of rows : ");
    scanf("%d", &r);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}