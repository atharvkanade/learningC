#include <stdio.h>

void main()
{
    int p, c, m, t, mp;

    printf("Enter the marks obtained in Physics :");
    scanf("%d", &p);
    printf("Enter the marks obtained in Chemistry :");
    scanf("%d", &c);
    printf("Enter the marks obtained in Mathematics :");
    scanf("%d", &m);
    printf("Total marks of Mathematics, Physics and Chemistry : %d\n", m + p + c);
    printf("Total marks of Maths and  Physics : %d\n", m + p);

    if (m >= 65)

        if (p >= 55)

            if (c >= 50)

                if ((m + p + c) >= 180 || (m + p) >= 140)

                    printf("The  candidate is eligible for admission.\n");
                else
                    printf("The candidate is not eligible.\n");
            else
                printf("The candidate is not eligible.\n");
        else
            printf("The candidate is not eligible.\n");
    else
        printf("The candidate is not eligible.\n");
}