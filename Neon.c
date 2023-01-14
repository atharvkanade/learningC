
#include <stdio.h>

int Check_Neon_Number(int num)
{

    int square = num * num;

    int n = square;

    int digit;

    int sum = 0;

    while (n != 0)
    {

        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    int ans = Check_Neon_Number(num);
    if (ans == 1)

        printf("The number is neon number");
    else

        printf("The number is not a neon number");
    return 0;
}
