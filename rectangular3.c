#include <stdio.h>
int main()
{
    int i, l1, l2, j;
    printf("Enter no of rows : ");
    scanf("%d", &l1);

    printf("Enter no of column : ");
    scanf("%d", &l2);

    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < l2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}