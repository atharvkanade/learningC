#include <stdio.h>
int main()
{
    int i, j, r, count;
    printf("Enter the number of rows :\n");
    scanf("%d", &r);
    r = r / 2;
    count = r + 2;
    for (i = 0; i < r; i++)
    {
        for (j = r; j > i; j--)
            ;
        {
            if (j != r)
            {
                printf("*%d", count);
            }
            else
            {
                printf("%d", count);
            }
        }
        count--;
        printf("\n");
    }
    count++;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j <= i; j++)
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
        count++;
        printf("\n");
    }
}