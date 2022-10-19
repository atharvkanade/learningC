#include <stdio.h>

int main()
{
    int i, j, k, r;
    printf("Enter number of rows : ");
    scanf("%d", &r);

    for (int i = 0; i < r; i++)
    {
        for (int k = r; k > i + 1; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}