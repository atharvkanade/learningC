#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + (arr[i] * arr[i]);
    }
    printf("Sum is : %d", sum);
    return 0;
}