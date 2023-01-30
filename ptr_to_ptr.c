#include <stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 29;
    ptr = &var;
    pptr = &ptr;

    printf("Value of var = %d", var);

    printf("\nValue available at *ptr = %d", *ptr);

    printf("\n Value available at **pptr = %d", **pptr);
}