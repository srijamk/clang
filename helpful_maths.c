#include <stdio.h>
#include <string.h>

int main()
{
  char a[101];

  scanf("%s", a);
  int one, two, three = 0;

  for (int i = 0; i < strlen(a); i++)
  {
    if (a[i] == '1')
    {
      one = one + 1;
    }
    else if (a[i] == '2')
    {
      two++;
    }
    else if (a[i] == '3')
    {
      three++;
    }
  }

  printf("%d %d %d", one, two, three);
}