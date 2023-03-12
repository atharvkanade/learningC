#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);

    for (int i = a; i < b; i++)
    {
        int num = i;
        int sum = 0;
        while (num != 0)
        {
            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        if (sum % 2 == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}