#include <conio.h>
#include <stdio.h>
int main()
{
    int i, j, n;
    char ch;

    printf("Enter The Number Of Rows To Print The Hollow Rhombus Pattern: ");
    scanf("%d%c", &n, &ch);
    printf("Enter The Symbol To Represent Hollow Rhombus: ");
    ch = getchar();

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        if (i == 1 || i == n)
            for (j = 1; j <= n; j++)
            {
                printf("%c", ch);
            }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                    printf("%c", ch);
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}