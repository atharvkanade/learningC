#include <stdio.h>

void reversearr(int arr[], int n);
void printarr(int arr[], int n);
int main()
{
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
    };
    reversearr(arr, 5);
    printarr(arr, 5);
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

void reversearr(int arr[], int n)
{

    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];
        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}
