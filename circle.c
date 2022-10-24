#include <stdio.h>
int main()
{
    int r, area;
    float pi = 3.14;

    printf("Enter radius of circle : ");
    scanf("%d", &r);
    area = (r * r) * pi;

    printf("Area of circle is : %d", area);
    return 0;
}