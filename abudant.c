#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a positive number : ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum > num)
    {
        printf("%d is an Abundant Number\n", num);
    }
    else
        printf("%d is not a Abundant Number", num);
}