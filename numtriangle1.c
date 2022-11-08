#include <stdio.h>
int main()
{
    int i, j, r, count;
    printf("Enter number of rows :");
    scanf("%d", &r);
    count = 1;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", count);
        }
        count++;
        printf("\n");
    }
    return 0;
}