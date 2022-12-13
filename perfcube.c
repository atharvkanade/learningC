#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, curoot, ans;

    printf(" Enter a number: ");
    scanf("%d", &num);
    curoot = round(pow(num, 1.0 / 3.0));

    if (curoot * curoot * curoot == num)
    {
        printf(" The number is a perfect Cube of %d \n", curoot);
    }
    else
    {
        printf(" The number is not a perfect Cube.\n");
    }

    return 0;
}
