#include <stdio.h>

int main()
{
  int x, y, z;
  int num, val;
  x = 0;
  y = 0;
  z = 0;

  scanf("%d", &num);

  for (int i = 0; i < num; i++)
  {
    scanf("%d", &val);
    x += val;
    scanf("%d", &val);
    y += val;
    scanf("%d", &val);
    z += val;
  }

  if (x == 0 && y == 0 && z == 0)
    printf("YES\n");
  else

    printf("NO\n");
}