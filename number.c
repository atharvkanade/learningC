

#include <stdio.h>

int main()
{
    int n, i, j, num = 1, gap;

    printf("Enter number of rows :");
    scanf("%d", &n);

    gap = n - 1;

    for (j = 1; j <= n; j++)
    {
        num = j;

        for (i = 1; i <= gap; i++)
            printf(" ");

        gap--;

        for (i = 1; i <= j; i++)
        {
            printf("%d", num);
            num++;
        }
        num--;
        num--;
        for (i = 1; i < j; i++)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
