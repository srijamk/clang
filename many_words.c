#include <stdio.h>

int main()
{
  char words[100];

  printf("Enter many words: ");

  scanf("%[^\n]", words);
  printf("You typed the words >>%s<<.\n", words);
}