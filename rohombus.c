#include <stdio.h>
int main()
{
    int i, j, r, n;
    printf("Enter number of rows : ");
    scanf("%d", &r);

    printf("Enter number to make rohombus of : ");
    scanf("%d", &n);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < r; j++)
        {
            printf("%d", n);
        }
        printf("\n");
    }

    return 0;
}