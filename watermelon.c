#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  if (num % 2 == 0 && num != 2)
    printf("Yes\n");
  else
    printf("No\n");
}