#include <stdio.h>

int main()
{
    int i, l, j;
    printf("Enter no of rows and column :");
    scanf("%d", &l);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
