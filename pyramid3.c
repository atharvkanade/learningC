#include <stdio.h>
int main()
{
    int i, j, k, r;

    printf("Enter number of rows : ");
    scanf("%d", &r);

    for (int i = r; i > 0; i--)
    {
        for (int k = r; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}