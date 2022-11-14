#include <stdio.h>
int main()

{
    int sec, h, m, s;
    printf("Enter total seconds :");
    scanf("%d", &sec);
    h = (sec / 3600);
    m = (sec - (h * 3600)) / 60;
    s = ((sec - (h * 3600)) - (m * 60));

    printf("Total = %d Hours %d Minutes and %d Seconds ", h, m, s);

    return 0;
}