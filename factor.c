#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Factors of :");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d ", i);
        }
    }
    return 0;
}