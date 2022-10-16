#include <stdio.h>
int main()
{
    int i, l1, l2, j;
    printf("Enter number of rows : ");
    scanf("%d", &l1);

    printf("Enter number of column : ");
    scanf("%d", &l2);

    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (i == 0 || i == l1 - 1 || j == 0 || j == l2 - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}