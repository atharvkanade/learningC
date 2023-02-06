#include <stdio.h>
int *findLarger(int *, int *);
void main()
{
    int num_a = 0;
    int num_b = 0;
    int *result;

    printf(" Input the first number : ");
    scanf("%d", &num_a);
    printf(" Input the second  number : ");
    scanf("%d", &num_b);

    result = findLarger(&num_a, &num_b);
    printf(" The number %d is larger.  \n\n", *result);
}

int *findLarger(int *n1, int *n2)
{
    if (*n1 > *n2)
        return n1;
    else
        return n2;
}
