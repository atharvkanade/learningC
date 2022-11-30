#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned long int cataLan(unsigned int n)
{
    if (n <= 1)
        return 1;
    unsigned long int catno = 0;
    for (int i = 0; i < n; i++)
        catno += cataLan(i) * cataLan(n - i - 1);
    return catno;
}
int main()
{
    int n;
    printf("Enter n :", n);
    scanf("%d", &n);
    printf(" The first %d catalan numbers are: \n", n);
    for (int i = 0; i < n; i++)
        printf("%lu ", cataLan(i));
    printf("\n");
    return 0;
}
