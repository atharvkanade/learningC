#include <stdio.h>
int main()
{
    int i, j, r, count;
    printf("Enter number of rows :");
    scanf("%d", &r);

    count = r + 2;
    for (i = 0; i < r; i++)
    {
        for (j = r; j > i; j--)
        {
            printf("%d", count);
        }
        count--;
        printf("\n");
    }
    return 0;
}