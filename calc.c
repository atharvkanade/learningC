#include <stdio.h>

int main()
{
    char op;
    float f, s;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands:");
    scanf("%f  %f", &f, &s);

    switch (op)
    {
    case '+':
        printf("%f + %f = %f", f, s, f + s);
        break;
    case '-':
        printf("%f - %f = %f", f, s, f - s);
        break;
    case '*':
        printf("%f * %f = %f", f, s, f * s);
        break;
    case '/':
        printf("%f / %f = %f", f, s, f / s);
        break;
    default:
        printf("Invalid operand.");
        break;
    }

    return 0;
}