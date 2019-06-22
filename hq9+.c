#include <stdio.h>

int main()
{
  char command[100];
  scanf("%s", command);
  char result = 'x';
  for (int i = 0; i < strlen(command); i++)
  {
    if (command[i] == 'H' || command[i] == 'Q' || command[i] == '9')
      result = 'Y';
  }
  if (result == 'Y')
    printf("YES\n");
  else
    printf("NO\n");
}