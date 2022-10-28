#include <stdio.h>
int
main ()
{
  int m;
  printf ("Enter month : ");
  scanf ("%d", &m);
  int y;
  printf ("Enter year : ");
  scanf ("%d", &y);
  if((m==2) && ((y%400==0) || ((y%100!=0)&&(y%4==0))))
    {
      printf ("This month has 28 days.");
    }

  else if (m == 2)
    {
      printf ("This month has 29 days ");
    }

  else
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
      printf ("This month has 31 days.");
    }

  else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
      printf ("This month has 30 days. ");
    }

  else
    {
      printf ("Invlid month!");
    }

}