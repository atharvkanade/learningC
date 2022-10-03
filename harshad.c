#include <stdio.h>

int checkHarshad(int num)
{

    int sum = 0;
    int temp = num;

    while (temp != 0)
    {
        sum = sum + temp % 10;
        temp /= 10;
    }

    return num % sum == 0;
}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    if (checkHarshad(num))
    {
        printf("This is a Harshad number");
    }
    else
    {
        printf("This is not  a Harshad number");
    }
}
