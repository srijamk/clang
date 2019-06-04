#include <stdio.h>

int main() {
  int x;
  short arr[20];
  double y;
  char string[51];
  int array[] = {1, 2, 3, 4, 5, 6};
  int total = 0;

  printf("size of x is %d bytes\n", sizeof x);
  printf("size of arr is %d bytes\n", sizeof arr);
  printf("size of one element of arr is %d bytes\n", sizeof arr[0]);
  printf("size of y is %d bytes\n", sizeof y); 

  for (int i = 0; (i < sizeof array / sizeof array[0]); i++)
    total += array[i];

  printf("The average of the numbers in the array is %d.\n", total / (sizeof array / sizeof array[0]));
}