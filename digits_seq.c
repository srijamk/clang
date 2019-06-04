#include <stdio.h>
//single digits: 1 - 9, 
// double digits: 10 - 189, 
// triple digits: 190 - 2889, 
// quad digits: 2890 - 7489, 
// quint digits: 7490 - 457489

int main() {
  int k;
  int cur = 1;
  char str[100];
  scanf("%d", &k);
  getchar();
  
  if (k < 10) {
    printf("%d\n", k);
  } else if (k >= 10 && k < 190) {
    k -= 10;
    if (k % 2 == 1) {
      printf("%d\n", (10 + (k / 2)) % 10);
    } else {
      printf("%d\n", (10 + (k / 2)) / 10);
    }
  } else if (k >= 190 && k < 2890) {
    k -= 190;
    if (k % 3 == 0) {
      printf("%d\n", (100 + (k / 3)) / 100);
    } else if (k % 3 == 1) {
      printf("%d\n", (((100 + (k / 3)) / 10) * 2) % 10);
    } else {
      printf("%d\n", (100 + (k / 3)) % 100);

    } 
  }
}