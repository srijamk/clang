#include <stdio.h>

char *football(char input[])
{

  char cur = input[0];
  int num_consecutive = 1;

  if (strlen(input) < 7)
    return "NO";
  else
  {
    for (int i = 1; i < strlen(input); i++)
    {
      if (num_consecutive == 7)
        return "YES";
      if (input[i] == cur)
        num_consecutive++;
      if (input[i] != cur)
        num_consecutive = 1;
      cur = input[i];
    }
    return ((num_consecutive == 7) ? "YES" : "NO");
  }
}

int main()
{
  char input[100];

  scanf("%s", input);
  printf("%s\n", football(input));
}