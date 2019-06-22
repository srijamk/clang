#include <stdio.h>

int main()
{
  int n, t;
  char temp;
  scanf("%d %d", &n, &t);
  char line[n];
  scanf("%s", line);

  for (int j = 0; j < t; j++)
  {
    int i = 0;
    while (i < n - 1)
    {
      if (line[i] == 'B' && line[i + 1] == 'G')
      {
        temp = line[i + 1];
        line[i + 1] = line[i];
        line[i] = temp;
        i += 2;
      }
      else
      {
        i += 1;
      }
    }
  }
  printf("%s\n", line);
}