#include <stdio.h>
int recursion (int p)
{
  int f;
  if (p == 1)
    {
      return (1);
    }
  else
    {
      f = p * recursion (p - 1);
    }
  return f;
}

int main ()
{
  int a, p;
  printf ("Enter the number:");
  scanf ("%d", &a);
  p = recursion(a);
  printf ("%d", p);
  return 0;
}
