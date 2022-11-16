#include <stdio.h>
int main()
{
    int p, x = 10;
    while (x != 0)
    {

        printf("Enter password :");
        scanf("%d", &p);

        if (p == 1234)
        {
            printf("Correct Password");
            x = 0;
        }
        else
        {
            printf("Wrong Password ,try another");
        }

        printf("\n");
    }
    return 0;
}