#include <stdio.h>

int print_int_ptr(int *ptr)
{
  printf("ptr points to the integer %d.\n", *ptr);
  printf("The integer has address %d.\n", ptr);
}

int my_scanf(int x)
{
  printf("Enter an integer: ");
  scanf("%d", &x);
  return x;
}

int main()
{

  typedef int *int_p;
  // just initializing a new data structure int_p which also is a pointer to an integer

  int_p p;
  // int_p is a nickname for int, so we're initializing a pointer p that points to an integer

  int *ptr;
  int x = 5;
  ptr = &x;
  print_int_ptr(ptr);
  printf("%d\n", my_scanf(x));
}
