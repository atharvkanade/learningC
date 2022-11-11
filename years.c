#include <stdio.h>
#include <math.h>

int main()
{
    int n, y, w, d;
    printf("Enter number of days :");
    scanf("%d", &n);

    y = (n / 365);
    w = (n % 365) / 7;
    d = n - ((y * 365) + (w * 7));

    printf("Years: %d\n", y);
    printf("Weeks: %d\n", w);
    printf("Days: %d \n", d);

    return 0;
}