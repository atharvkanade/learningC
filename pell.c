#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a = 1, b = 0, c;
    printf("Enter a number upto the series is required : ");
    scanf("%d", &n);

    printf(" The first %d numbers of Pell series are: \n", n);
    c = 0;
    printf(" %d ", c);
    for (i = 1; i < n; i++)
    {
        c = a + 2 * b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
