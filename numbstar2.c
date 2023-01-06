#include <stdio.h>
int main()
{
    int i, j, l, count = 0, count1 = 3;
    printf("Enter the number of rows\n");
    scanf("%d", &l);
    for (int i = 0; i < l / 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            count++;
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
        for (j = 0; j <= i + 2; j++)
        {
            count1++;
            if (j != 0)
            {
                printf("*%d", count1);
            }
            else
            {
                printf("%d", count1);
            }
        }
        printf("\n");
    }
}