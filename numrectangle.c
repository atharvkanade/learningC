#include <stdio.h>
int main()
{
    int i, j, c, r, n;
    printf("Enter number of rows :");
    scanf("%d", &r);

    printf("Enter number of column :");
    scanf("%d", &c);

    printf("Enter a number to make rectangle of :");
    scanf("%d", &n);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}