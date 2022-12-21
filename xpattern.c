#include <stdio.h>
int main()
{
    int n, i, j, count;

    printf("Enter nnumber  of rows :");
    scanf("%d", &n);

    count = n * 2 - 1;

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= count; j++)
        {
            if (j == i || (j == count - i + 1))
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