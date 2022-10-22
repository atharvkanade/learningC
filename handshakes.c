#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int totalh;

    totalh = n * (n - 1) / 2;

    printf("Total number of handshakes for %d people are %d", n, totalh);

    return 0;
}