#include <stdio.h>

int main()
{
  int n;
  int x = 0;
  scanf("%d", &n);
  char line[3];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", line);
    if (line[0] == '+' || line[2] == '+')
      x = x + 1;
    else
      x = x - 1;
  }

  printf("%d\n", x);
}