#include <stdio.h>
int main()
{
    int d1,d2,area;
    printf("Enter size of first diagonal : ");
    scanf("%d",&d1);
     
     printf("Enter size of second diagonal : ");
    scanf("%d",&d2);
    
    area = (d1 * d2) / 2;
    
    printf("Area of given rohombus is :  %d",area);
    
    return 0;
}