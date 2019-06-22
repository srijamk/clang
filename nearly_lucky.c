#include <stdio.h>
#include <stdlib.h>

int main()
{
  char num[20];
  char result[3];

  scanf("%s", num);
  for (int i = 0; i < strlen(num); i++)
  {
    if (num[i] != '4' && num[i] != '7')
    {
      result[0] = 'N';
      result[1] = 'O';
      break;
    }
  }
  if (result[0] != 'N')
  {
    result[0] = 'Y';
    result[1] = 'E';
    result[2] = 'S';
  }

  printf(result);
  fflush(stdin);
}