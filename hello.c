#include <stdio.h>

int var = 0;

static int func(int x)
{
  return x;
}

int main()
{
  int x = 1;
  printf("%d\n", func(x));
}
