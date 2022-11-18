#include <stdio.h>
int main()
{
    char c;
    int low_v, upp_v;

    printf("Enter a alphabet :");
    scanf("%c", &c);

    low_v = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'U');

    upp_v = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (low_v || upp_v)
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a constant", c);
    }
    return 0;
}