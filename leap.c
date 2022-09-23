#include <stdio.h>
int main()

{
    int year;
    printf("enter a year :");
    scanf("%d ", &year);

    year % 4 == 0 ? printf("This is a leap year ") : printf(" This is not a leap year");

    return 0;

}
