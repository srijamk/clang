#include <stdio.h>

int main()
{
  char string[4];
  printf("Enter a character: ");
  scanf("%c", &string[0]);
  printf("You typed >>%c<<.\n", string[0]);

  getchar(); // eats return key

  printf("Enter four characters: ");
  scanf("%4c", &string[0]);
  printf("You typed >>%c%c%c%c<<.\n", string[0], string[1], string[2], string[3]);
}