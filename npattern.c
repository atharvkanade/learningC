#include <stdio.h>
int main()
{
    int i, j, r, count, count1;
    count = 2;
    printf("Enter the number of rows :\n");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        if (i <= r / 2)
        {
            count1 = count + 1;
            for (j = 0; j <= i; j++)
            {
                count++;
                printf("%d", count);
            }
            printf("\n");
        }
        else
        {
            count = count1 - (r - i);
            count1 = count;
            for (j = i; j < r; j++)
            {
                printf("%d", count);
                count++;
            }
            printf("\n");
        }
    }
}