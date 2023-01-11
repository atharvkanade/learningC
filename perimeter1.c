
#include <stdio.h>

int main()
{

    int l, b;

    printf("Enter length of rectangle : ");
    scanf("%d", &l);

    printf("Enter bridth of rectangle : ");
    scanf("%d", &b);

    printf("Area of rectangle is : %d", l * b);
    printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
    return 0;
}
