#include <stdio.h>

int main()
{
    int i, j, n, count = 0;
    printf("Enter the number of rows :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
        printf("\n");
    }
    return 0;
}
