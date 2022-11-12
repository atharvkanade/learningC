#include <stdio.h>
int main()
{
    int n1, n2, opt;
    printf("Enter first number :");
    scanf("%d", &n1);

    printf("Enter second number :");
    scanf("%d", &n2);

    printf("Input your option :");
    printf("1-Addition \n 2-Substraction.\n 3-Multiplication.\n 4-Division.\n 5-Exit.\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("The Addition of  %d and %d is: %d\n", n1, n2, n1 + n2);
        break;
    case 2:
        printf("The Substraction of %d  and %d is: %d\n", n1, n2, n1 - n2);
        break;

    case 3:
        printf("The Multiplication of %d  and %d is: %d\n", n1, n2, n1 * n2);
        break;

    case 4:
        if (n2 == 0)
        {
            printf("The second integer is zero. Dvide by zero.\n");
        }
        else
        {
            printf("The Division of %d  and %d is : %d\n", n1, n2, n1 / n2);
        }
        break;

    case 5:
        break;

    default:
        printf("Input correct option\n");
        break;
    }
}