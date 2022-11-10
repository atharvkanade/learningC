#include <stdio.h>
int main()
{
    int a;
    printf("Enter your age :");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote");
    }
    else
    {
        printf("You are  not eligible for casting your vote!");
    }
    return 0;
}