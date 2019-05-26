#include <stdio.h>

int main()
{
  char name[21];

  name[0] = 'M';
  name[1] = 'a';
  name[2] = 'r';
  name[3] = 'k';
  name[4] = '\0';

  printf("Your name is %s\n", name);
}