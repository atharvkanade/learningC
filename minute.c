#include <stdio.h>
#include <math.h>
int main()
{
    int h, m, tm, ts;

    printf("Enter hours :");
    scanf("%d", &h);

    printf("Enter minutes :");
    scanf("%d", &m);

    tm = (h * 60) + m;
    printf("Total minutes : %d minutes \n", tm);

    ts = (tm * 60);
    printf("Total  seconds : %d seconds", ts);

    return 0;
}