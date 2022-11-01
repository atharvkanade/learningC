#include <stdio.h>
int main()
{
    int i, j, r, n;
    printf("Enter number of rows : ");
    scanf("%d", &r);

    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 0; i < r; i++)
    {
        if (i == 0 || i == r - 1)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d", n);
            }
        }
        else
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == 0 || j == 2)
                {
                    printf("%d", n);
                }
                else
                {
                    printf("%d", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}