#include <stdio.h>
int main()
{
    int h;
    printf("Enetr your height in (cm) :");
    scanf("%d", &h);

    if (h <= 130)
    {
        printf("The person is Dwarf ");
    }
    else
    {
        printf("The person is Tall");
    }

    return 0;
}