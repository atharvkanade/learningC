#include <stdio.h>
int main()
{
    int i, j, r, count = 0;

    printf("Enter number of rows : ");
    scanf("%d", &r);

    for (i = r; i > 0; i--)
    {
        count += i;
    }
    for (i = 0; i < r; i++)
    {
        for (j = r; j > i; j--)
        {
            printf("%d", count);
            count--;
        }
        printf("\n");
    }

    return 0;
}