#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter the number of rows(odd) :\n");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        if (i <= (r / 2))
        {
            for (j = 0; j <= i; j++)
            {
                if (j != 0)
                {
                    printf("*%d", i + 1);
                }
                else
                {
                    printf("%d", i + 1);
                }
            }
        }
        else
        {
            for (j = i; j < r; j++)
            {
                if (j != i)
                {
                    printf("*%d", r - i);
                }
                else
                {
                    printf("%d", r - i);
                }
            }
        }

        printf("\n");
    }
}