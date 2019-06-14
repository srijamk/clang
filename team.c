#include <stdio.h>

int main()
{
  int n, count;
  count = 0;
  int arr[3];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr[j]);
    }
    if ((arr[0] + arr[1] + arr[2]) >= 2)
    {
      count++;
    }
  }
  printf("%d\n", count);
}