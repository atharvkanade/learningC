#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    printf("It is %s", (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? "albhabet" : "not albhabet"));

    return 0;
}