#include <stdio.h>
int main()
{
    int a;
    printf("Enter a :");
    scanf("%d", &a);
    int b;
    printf("Enter b :");
    scanf("%d", &b);
    int hcf = 1;

    for (int i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    int lcm = (a * b) / hcf;

    printf("The LCM: %d", lcm);

    return 0;
}