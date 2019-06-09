#include <stdio.h>

int main()
{
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  if ((x - y - z == 0 || y - x - z == 0) && z == 0)
    printf("0\n");
  else if (x == y && z != 0)
    printf("?\n");
  else if (x - y - z > 0 && x > y)
    printf("+\n");
  else if (x - y - z < 0 && x > y)
    printf("?\n");
  else if (y - x - z > 0 && y > x)
    printf("-\n");
  else
    printf("?\n");
}