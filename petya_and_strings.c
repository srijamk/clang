#include <stdio.h>

int main()
{
  char str1[101];
  scanf("%s", str1);
  char str2[101];
  scanf("%s", str2);
  for (int i = 0; i < strlen(str1); i++)
  {
    str1[i] = tolower(str1[i]);
  }
  for (int i = 0; i < strlen(str2); i++)
  {
    str2[i] = tolower(str2[i]);
  }

  if (strcmp(str1, str2) == 0)
    printf("0\n");
  else if (strcmp(str1, str2) < 0)
    printf("-1\n");
  else
    printf("1\n");
}