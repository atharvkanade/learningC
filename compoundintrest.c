
#include <stdio.h>

#include <math.h>

int main()
{

    double principal = 750;

    double rate = 3;

    double time = 10;

    double Amount = principal *
                    ((pow((1 + rate / 100),
                          time)));
    double CI = Amount - principal;

    printf("Compound Interest is : %lf", CI);
    return 0;
}
