#include <stdio.h>

int main()
{
  int n;
  int add = 0;
  int sub = 0;
  scanf("%d", &n);
  char line[3];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", line);
    if (line[0] == '+' || line[2] == '+')
      add++;
    else
      sub++;
  }
  printf("%d\n", add - sub);
}
