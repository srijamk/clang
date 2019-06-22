#include <stdio.h>

int main()
{
  char string[101];
  scanf("%s", string);

  if (strlen(string) % 2 == 0)
    printf("CHAT WITH HER!\n");
  else
    printf("IGNORE HIM!\n");
}