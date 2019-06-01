#include <stdio.h>

int main()
{
  char str[] = "hello there";
  int length = strlen(str);
  char temp;
  int i;

  for (i = 0; i < length / 2; ++i) {
    temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }

  for (i = 0; i < length; ++i) {
    printf("%c", str[i]);
  }
  printf("\n");
}