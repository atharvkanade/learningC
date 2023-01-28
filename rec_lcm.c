#include <stdio.h>

int lcm(int, int);

int main()
{
    int x, y, LCM;
    int prime[50];

    printf("Enter The Numbers To Find LCM: ");
    scanf("%d%d", &x, &y);
    LCM = lcm(x, y);
    printf("The LCM of The Given Numbers is %d\n", LCM);
    return 0;
}

int lcm(int x, int y)
{
    static int common = 1;

    if (common % x == 0 && common % y == 0)
    {

        return common;
    }
    common++;
    lcm(x, y);
    return common;
}