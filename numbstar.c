#include <stdio.h>

int main()
{
    int n, j, i, count = 0;
    printf("Enter number of rows :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            count++;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            count++;
            if (j == n - 1)
            {
                printf("%d", count);
            }
            else
            {
                printf("%d*", count);
            }
        }
        count = count - 2 * n;
        printf("\n");
    }
}
