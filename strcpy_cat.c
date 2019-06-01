#include <stdio.h>

int main() {
  char first[30], last[30], cat[60];
  int i, j;
  printf("Enter your first name: ");
  scanf("%s", first);
  getchar();
  printf("Enter your last name: ");
  scanf("%s", last);
  getchar();

  for (i = 0; first[i] != '\0'; ++i) {
    cat[i] = first[i];
  }

  cat[i] = ' ';
  i++;

  for (j = 0; last[j] != '\0'; ++j, ++i) {
    cat[i] = last[j];
  }
  cat[i] = '\0';

  printf("The full name is %s.\n", cat);


}