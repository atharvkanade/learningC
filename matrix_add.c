#include <stdio.h>

int main()
{

    int a[3][3] = {{4, 6, 1}, {79, 83, 32}, {8, 2, 1}};
    int b[3][3] = {{5, 1, 7}, {4, 8, 65}, {3, 2, 1}};

    int c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
