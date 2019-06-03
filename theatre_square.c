#include <stdio.h>

int main() {
  int n, m, a;
  long na, ma = 0;
  scanf("%d %d %d", &n, &m, &a);

  while (na * a < n)
    na++;
  while (ma * a < m)
    ma++;
  printf("%ld\n", na * ma);
}