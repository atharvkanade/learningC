#include <stdio.h> 
#include <math.h>

float squarearea(float side );
float circlearea(float rad);


int main() 
{
    float side=4;
    printf("area of square is : %f \n ",squarearea(side));

    float rad = 4;
    printf("area of circle is : %f", circlearea(rad));

    return 0 ;
}

float squarearea(float side )
{
    return side*side ;
}     

float circlearea(float rad)
{
    return 3.14 * rad * rad;
}

