#include <stdio.h>

int main()
{
    int p, q, r, s;
    printf("Enter p :");
    scanf("%d", &p);
    printf("Enter q :");
    scanf("%d", &q);
    printf("Enter r :");
    scanf("%d", &r);
    printf("Enter s :");
    scanf("%d", &s);

    // // p , r and s are positive and p is even.If q is greater than r and s is greater than
    //  p and if the sum of r and s is greater than the sum of p and q print "Correct values",
    //   otherwise print "Wrong values"

    if ((q > r) && (s > p) && ((r + s) > (p + q)) && (r > 0) && (s > 0) && (p % 2 == 0))
    {
        printf("Correct values ");
    }
    else
    {
        printf("Wrong values ");
    }
    return 0;
}