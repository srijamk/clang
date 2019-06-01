#include <stdio.h>

int main()
{
  int start, end, divisor, num, num_divisors;
  printf("Enter a starting number: ");
  scanf("%d", &start);
  getchar();
  printf("Enter the number of numbers: ");
  scanf("%d", &end);
  getchar();

  for (num = start; num <= start + end; ++num) {

    num_divisors = 0;

    for (int divisor = 1; divisor <= num / 2; ++divisor)
      if (num % divisor == 0)
        ++num_divisors;

    if (num_divisors == 1 && num != 1)
      printf("%d* -> ", num);
    else
      printf("%d -> ", num);

    for (int divisor = 1; divisor <= num / 2; ++divisor)
      if (num % divisor == 0)
        printf("%d, ", divisor);

    printf("%d\n", num);
  }
}