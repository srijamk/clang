#include <stdio.h>
#include <string.h>

int main() {
  int n, str_len;
  char word[100];

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", word);
    getchar();
    str_len = strlen(word);
    if (str_len > 10) {
      printf("%c%d%c\n", word[0], str_len - 2, word[str_len - 1]);
    } else {
      printf("%s\n", word);
    }
  }
}