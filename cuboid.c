#include<stdio.h>
#include<math.h>
int main()
{
int l,w,h,sa;  

printf("Enter height of cuboid : " );
scanf("%d,",&h);
printf("Enter length of cuboid :");     
scanf("%d",&l);  
printf("Enter weight of cuboid :");
scanf("%d",&w);

sa = 2*(l*w)+ 2*(w*h)+ 2*(l*h);

printf("Surface area of a given cuboid is : %d unit^2",sa);

return 0;
} 