#include <stdio.h>

int main()
{
    int *ptrA, *ptrB;

    ptrA = (int *)
        printf("Enter A :");
    scanf("%d", &ptrA);

    ptrB = (int *)
        printf("Enter B :");
    scanf("%d", &ptrB);

    if (ptrB > ptrA)
        printf("PtrB is greater than ptrA");
    else
    {
        printf("PtrB is not greater than ptrA");
    }

    return (0);
}