#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prno, i, n, flg;

    printf(" Enter a number: ");
    scanf("%d", &prno);
    for (i = 1; i <= prno; i++)
    {
        if (i * (i + 1) == prno)
        {
            flg = 1;
            break;
        }
    }

    if (flg == 1)
    {
        printf(" The given number is a Pronic Number.\n");
    }
    else
    {
        printf(" The given number is not a Pronic Number.\n");
    }
    return 0;
}
