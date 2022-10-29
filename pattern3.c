#include <stdio.h>
int main()
{
    int i,j,r;
    printf("Enter number of rows and         columns : ");
    scanf("%d",&r);
    
    for(int i=1 ; i<=r ; i++)
    {
        for (int j=0 ; j< r; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}