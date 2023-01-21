#include <stdio.h>
int main()
{
    int i, j, r, count;
    printf("Enter the number of rows/columns :\n");
    scanf("%d", &r);
    count = 2;
    for (i = 1; i <= r; i++)
    {
        if (i <= r / 2)
        {
            for (j = 1; j <= i; j++)
            {
                if (j != 1)
                {
                    printf("*%d", count);
                }
                else
                {
                    printf("%d", count);
                }
            }
            count++;
            printf("\n");
        }
        else
        {
            count--;

            for (j = 0; j < r - i + 1; j++)
            {
                if (j != 0)
                {
                    printf("*%d", count);
                }
                else
                {
                    printf("%d", count);
                }
            }

            printf("\n");
        }
    }
}