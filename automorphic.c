#include <stdio.h>
int checkAutomorphic(int num)
{

    int square = num * num;

    while (num != 0)
    {

        if (num % 10 != square % 10)
        {
            return 0;
        }

        num /= 10;
        square /= 10;
    }
    return 1;
}
int main()
{

    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    int square;
    square = num * num;

    if (checkAutomorphic(num))
        printf("This is a Automorphic number");
    else
        printf("this is  not Automorphic Number");
}
