#include <stdio.h>
int main()
{
    float w1, n1, w2, n2, a;

    printf("Enter weight of first item :");
    scanf("%f", &w1);
    printf("Enter number of first item :");
    scanf("%f", &n1);
    printf("Enter weight of second item :");
    scanf("%f", &w2);
    printf("Enter number og second item :");
    scanf("%f", &n2);

    a = ((w1 * n1) + (w2 * n2)) / (n1 + n2);
    printf("The average of items is :%f", a);

    return 0;
}