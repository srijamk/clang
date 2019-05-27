#include <stdio.h>

int main()
{
  char name[20];
  int age;

  printf("Enter your name: ");
  scanf("%s", &name[0]);
  printf("Enter your age: ");
  scanf("%d", &age);

  if (strcmp(name, "Bruce") == 0 && (age > 17 || age < 13))
    printf("You are the Chosen one!\n");
  else
    printf("You're not special.\n");

  getchar();
}