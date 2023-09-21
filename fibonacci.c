#include <stdio.h>

int main()
{
    int num;
  
    printf("Enter a number :");
    scanf("%d", &num);
    int a = 0, b = 1;

    printf(" Fibonacci series up to %d is :%d, %d ,", num, a, b);

    int nextTerm;

    for (int i = 2; i < num; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        printf("%d, ", nextTerm);
    }

    return 0;
}
