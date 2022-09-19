#include <stdio.h>
int main()
{
 
    int age = 44;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d \n ", age );
    return 0;
}