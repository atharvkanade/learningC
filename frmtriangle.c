#include <stdio.h>

int main()
{
    int anglea, angleb, anglec, sum;

    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &anglea, &angleb, &anglec);

    sum = anglea + angleb + anglec;

    if (sum == 180)
    {
        printf("It is a valid triangle.\n");
    }
    else
    {
        printf("It is a invalid triangle.\n");
    }
    return 0;
}