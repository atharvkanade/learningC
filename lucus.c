#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    printf(" The first %d Lucus numbers are: \n", n);

    int n1 = 2, n2 = 1, n3;
    if (n > 1)
    {
        printf("%d %d ", n1, n2);
        for (int i = 2; i < n; ++i)
        {
            n3 = n2;
            n2 += n1;
            n1 = n3;
            printf("%d ", n2);
        }
        printf("\n");
    }
    else if (n == 1)
    {
        printf("%d ", n2);
        printf("\n");
    }
    else
    {
        printf("Input a positive number.\n");
    }
}
