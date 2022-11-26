#include <stdio.h>
int main()
{
    int i, j, r, count, count1;
    count1 = 3;
    count = 0;
    printf("Enter the number of rows(odd) :\n");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
        if (i <= r / 2)
        {
            count = count1;
            for (j = 0; j <= i; j++)
            {
                count++;
            }
            count1 = count;
            for (j = 0; j <= i; j++)
            {
                count--;
                printf("%d", count);
            }

            printf("\n");
        }
        else
        {
            for (j = i; j < r; j++)
            {
                count--;

                printf("%d", count);
            }
            printf("\n");
        }
}
