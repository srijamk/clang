#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
  char word[100];
  char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
  int length;

  scanf("%s", word);
  length = strlen(word);
  for (int i = 0; i < length; i++) {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y' ) {
      ;
    } else {
      printf(".%c", tolower(word[i]));
    }
  }
  printf("\n");
}