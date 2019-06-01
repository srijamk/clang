#include <stdio.h>

int main()
{
  char str[] = "Hello there";
  int length;

  for (length = 0; str[length] != '\0'; ++length)
    ;

  printf("The length of \"%s\" is %d.\n", str, length);
}