#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  printf("Enter a :");
  scanf("%d", &a);
  int b;
  printf("Enter b :");
  scanf("%d", &b);
  int hcf = 1;

  for (int i = 1; i <= a || i <= b; i++)
  {
    if (a % i == 0 && b % i == 0)
      hcf = i;
  }

  printf("The HCF: %d", hcf);
  return 0;
}