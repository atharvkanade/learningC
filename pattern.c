#include <stdio.h>

int main()
{
    int i, l, j;
    printf("enter number of rows and column :");
    scanf("%d", &l);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}