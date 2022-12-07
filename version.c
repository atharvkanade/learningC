#include <stdio.h>
int main()
{
    int v;
    printf("Enter your STDC version :");
    scanf("%d", &v);

    if (v >= 201710L)
    {
        printf("We are using C18!\n");
    }

    else if (v >= 201112L)
    {
        printf("We are using C11!\n");
    }

    else if (v >= 199901L)
    {
        printf("We are using C99!\n");
    }

    else
    {
        printf("We are using C89/C90!\n");
    }
    return 0;
}