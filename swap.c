#include <stdio.h>

int swap(int *ptrx, int *ptry)
{
  int temp_x = *ptrx;
  *ptrx = *ptry;
  *ptry = temp_x;
}

int main()
{
  int x, y;
  int *ptrx, *ptry;
  ptrx = &x;
  ptry = &y;
  scanf("%d %d", &x, &y);
  printf("Before swap the value of x is %d and value of y is %d\n", x, y);
  swap(ptrx, ptry);
  printf("The value of x is %d and value of y is %d\n", x, y);
}